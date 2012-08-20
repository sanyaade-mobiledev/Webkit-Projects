/*
 * Copyright (C) 1999 Lars Knoll (knoll@kde.org)
 *           (C) 1999 Antti Koivisto (koivisto@kde.org)
 *           (C) 2000 Dirk Mueller (mueller@kde.org)
 * Copyright (C) 2003, 2006, 2007, 2008, 2009, 2010 Apple Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#import "config.h"
#import "Font.h"

#import "GlyphBuffer.h"
#import "GraphicsContext.h"
#import "Logging.h"
#import "SimpleFontData.h"
#import "WebCoreSystemInterface.h"

#import "BitmapImage.h"
#import "SharedBuffer.h"
#import "WAKView.h"
#import "WKGraphics.h"
#import <CoreText/CoreText.h>
#import <GraphicsServices/GraphicsServices.h>
#import <wtf/StdLibExtras.h>
#import <wtf/Threading.h>

#define SYNTHETIC_OBLIQUE_ANGLE 14

#ifdef __LP64__
#define URefCon void*
#else
#define URefCon UInt32
#endif

using namespace std;

namespace WebCore {

bool Font::canReturnFallbackFontsForComplexText()
{
    return true;
}

bool Font::canExpandAroundIdeographsInComplexText()
{
    return true;
}

// CTFontGetVerticalTranslationsForGlyphs is different on Snow Leopard.  It returns values for a font-size of 1
// without unitsPerEm applied.  We have to apply a transform that scales up to the point size and that also 
// divides by unitsPerEm.
static bool hasBrokenCTFontGetVerticalTranslationsForGlyphs()
{
    return false;
}

static void showGlyphsWithAdvances(const FloatPoint& point, const SimpleFontData* font, CGContextRef context, const CGGlyph* glyphs, const CGSize* advances, size_t count)
{
    CGContextSetTextPosition(context, point.x(), point.y());

    const FontPlatformData& platformData = font->platformData();
    if (!platformData.isColorBitmapFont()) {
        CGAffineTransform savedMatrix;
        bool isVertical = font->platformData().orientation() == Vertical;
        if (isVertical) {
            CGAffineTransform rotateLeftTransform = CGAffineTransformMake(0, -1, 1, 0, 0, 0);
            savedMatrix = CGContextGetTextMatrix(context);
            CGAffineTransform runMatrix = CGAffineTransformConcat(savedMatrix, rotateLeftTransform);
            CGContextSetTextMatrix(context, runMatrix);
            
            CGAffineTransform translationsTransform;
            if (hasBrokenCTFontGetVerticalTranslationsForGlyphs()) {
                translationsTransform = CGAffineTransformMake(platformData.m_size, 0, 0, platformData.m_size, 0, 0);
                translationsTransform = CGAffineTransformConcat(translationsTransform, rotateLeftTransform);
                CGFloat unitsPerEm = CGFontGetUnitsPerEm(platformData.cgFont());
                translationsTransform = CGAffineTransformConcat(translationsTransform, CGAffineTransformMakeScale(1 / unitsPerEm, 1 / unitsPerEm));
            } else {
                translationsTransform = rotateLeftTransform;
            }
            Vector<CGSize, 256> translations(count);
            CTFontGetVerticalTranslationsForGlyphs(platformData.ctFont(), glyphs, translations.data(), count);
            
            CGAffineTransform transform = CGAffineTransformInvert(CGContextGetTextMatrix(context));

            CGPoint position = FloatPoint(point.x(), point.y() + font->fontMetrics().floatAscent(IdeographicBaseline) - font->fontMetrics().floatAscent());
            Vector<CGPoint, 256> positions(count);
            for (size_t i = 0; i < count; ++i) {
                CGSize translation = CGSizeApplyAffineTransform(translations[i], translationsTransform);
                positions[i] = CGPointApplyAffineTransform(CGPointMake(position.x - translation.width, position.y + translation.height), transform);
                position.x += advances[i].width;
                position.y += advances[i].height;
            }
            CGContextShowGlyphsAtPositions(context, glyphs, positions.data(), count);
            CGContextSetTextMatrix(context, savedMatrix);
        } else
            CGContextShowGlyphsWithAdvances(context, glyphs, advances, count);
    }
    else {
        if (!count)
            return;

        Vector<CGPoint, 256> positions(count);
        CGAffineTransform matrix = CGAffineTransformInvert(CGContextGetTextMatrix(context));
        positions[0] = CGPointZero;
        for (size_t i = 1; i < count; ++i) {
            CGSize advance = CGSizeApplyAffineTransform(advances[i - 1], matrix);
            positions[i].x = positions[i - 1].x + advance.width;
            positions[i].y = positions[i - 1].y + advance.height;
        }
        CTFontDrawGlyphs(platformData.ctFont(), glyphs, positions.data(), count, context);
    }
}

void Font::drawGlyphs(GraphicsContext* context, const SimpleFontData* font, const GlyphBuffer& glyphBuffer, int from, int numGlyphs, const FloatPoint& anchorPoint, bool /*setColor*/) const
{
    CGContextRef cgContext = context->platformContext();

    bool shouldSmoothFonts = true;
    bool changeFontSmoothing = false;
    
    switch(fontDescription().fontSmoothing()) {
    case Antialiased: {
        context->setShouldAntialias(true);
        shouldSmoothFonts = false;
        changeFontSmoothing = true;
        break;
    }
    case SubpixelAntialiased: {
        context->setShouldAntialias(true);
        shouldSmoothFonts = true;
        changeFontSmoothing = true;
        break;
    }
    case NoSmoothing: {
        context->setShouldAntialias(false);
        shouldSmoothFonts = false;
        changeFontSmoothing = true;
        break;
    }
    case AutoSmoothing: {
        // For the AutoSmooth case, don't do anything! Keep the default settings.
        break; 
    }
    default: 
        ASSERT_NOT_REACHED();
    }
    
    if (!shouldUseSmoothing()) {
        shouldSmoothFonts = false;
        changeFontSmoothing = true;
    }


    const FontPlatformData& platformData = font->platformData();

    CGContextSetFont(cgContext, platformData.cgFont());
    FloatPoint point = anchorPoint;
    float fontSize = platformData.size();
    if (platformData.m_isEmoji) {
        if (!context->emojiDrawingEnabled())
            return;

        // Mimic the positioining of non-bitmap glyphs, which are not subpixel-positioned.
        point.setY(ceilf(point.y()));

        // Emoji glyphs snap to the CSS pixel grid.
        point.setX(floorf(point.x()));

        // Emoji glyphs are offset one CSS pixel to the right.
        point.move(1, 0);

        // Emoji glyphs are offset vertically based on font size.
        float y = point.y();
        if (fontSize <= 15) {
            // Undo Core Text's y adjustment.
            point.setY(floorf(y) - .1f * (fontSize + 2) + 2);
        } else {
            if (fontSize < 26)
                y -= .35f * fontSize - 10;

            // Undo Core Text's y adjustment.
            point.setY(floorf(y) - 2);
        }
    }

    CGAffineTransform matrix = platformData.isColorBitmapFont() ? CGAffineTransformIdentity : CGAffineTransformMakeScale(fontSize, fontSize);
    matrix.b = -matrix.b;
    matrix.d = -matrix.d;

    if (platformData.m_syntheticOblique)
        matrix = CGAffineTransformConcat(matrix, CGAffineTransformMake(1, 0, -tanf(SYNTHETIC_OBLIQUE_ANGLE * acosf(0) / 90), 1, 0, 0)); 
    CGContextSetTextMatrix(cgContext, matrix);

    CGContextSetFontSize(cgContext, 1.0f);


    FloatSize shadowOffset;
    float shadowBlur;
    Color shadowColor;
    ColorSpace shadowColorSpace;
    ColorSpace fillColorSpace = context->fillColorSpace();
    context->getShadow(shadowOffset, shadowBlur, shadowColor, shadowColorSpace);

    bool hasSimpleShadow = context->textDrawingMode() == TextModeFill && shadowColor.isValid() && !shadowBlur && !platformData.isColorBitmapFont() && (!context->shadowsIgnoreTransforms() || context->getCTM().isIdentityOrTranslationOrFlipped());
    if (hasSimpleShadow) {
        // Paint simple shadows ourselves instead of relying on CG shadows, to avoid losing subpixel antialiasing.
        context->clearShadow();
        Color fillColor = context->fillColor();
        Color shadowFillColor(shadowColor.red(), shadowColor.green(), shadowColor.blue(), shadowColor.alpha() * fillColor.alpha() / 255);
        context->setFillColor(shadowFillColor, shadowColorSpace);
        float shadowTextX = point.x() + shadowOffset.width();
        // If shadows are ignoring transforms, then we haven't applied the Y coordinate flip yet, so down is negative.
        float shadowTextY = point.y() + shadowOffset.height() * (context->shadowsIgnoreTransforms() ? -1 : 1);
        showGlyphsWithAdvances(FloatPoint(shadowTextX, shadowTextY), font, cgContext, glyphBuffer.glyphs(from), glyphBuffer.advances(from), numGlyphs);
        if (font->syntheticBoldOffset() && !platformData.m_isEmoji)
            showGlyphsWithAdvances(FloatPoint(shadowTextX + font->syntheticBoldOffset(), shadowTextY), font, cgContext, glyphBuffer.glyphs(from), glyphBuffer.advances(from), numGlyphs);
        context->setFillColor(fillColor, fillColorSpace);
    }

    showGlyphsWithAdvances(point, font, cgContext, glyphBuffer.glyphs(from), glyphBuffer.advances(from), numGlyphs);
    if (font->syntheticBoldOffset() && !platformData.m_isEmoji)
        showGlyphsWithAdvances(FloatPoint(point.x() + font->syntheticBoldOffset(), point.y()), font, cgContext, glyphBuffer.glyphs(from), glyphBuffer.advances(from), numGlyphs);

    if (hasSimpleShadow)
        context->setShadow(shadowOffset, shadowBlur, shadowColor, shadowColorSpace);

}

}
