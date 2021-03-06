/*
 * Copyright (C) 2004, 2006, 2008 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#ifndef Cursor_h
#define Cursor_h

#include "Image.h"
#include "IntPoint.h"
#include <wtf/RefPtr.h>

#if PLATFORM(WIN)
typedef struct HICON__* HICON;
typedef HICON HCURSOR;
#include <wtf/PassRefPtr.h>
#include <wtf/RefCounted.h>
#elif PLATFORM(MAC)
#include <wtf/RetainPtr.h>
#elif PLATFORM(GTK)
#include "GRefPtrGtk.h"
#elif PLATFORM(QT)
#include <QCursor>
#elif PLATFORM(CHROMIUM)
#include "PlatformCursor.h"
#elif PLATFORM(HAIKU)
#include <app/Cursor.h>
#endif


#if PLATFORM(WX)
class wxCursor;
#endif

#if PLATFORM(WIN)
typedef struct HICON__ *HICON;
typedef HICON HCURSOR;
#endif

#if PLATFORM(WIN) || PLATFORM(MAC) || PLATFORM(GTK) || PLATFORM(QT) || PLATFORM(EFL)
#define WTF_USE_LAZY_NATIVE_CURSOR 1
#endif

namespace WebCore {

    class Image;


    class Cursor {
    public:
        enum Type {
            Pointer,
            Cross,
            Hand,
            IBeam,
            Wait,
            Help,
            EastResize,
            NorthResize,
            NorthEastResize,
            NorthWestResize,
            SouthResize,
            SouthEastResize,
            SouthWestResize,
            WestResize,
            NorthSouthResize,
            EastWestResize,
            NorthEastSouthWestResize,
            NorthWestSouthEastResize,
            ColumnResize,
            RowResize,
            MiddlePanning,
            EastPanning,
            NorthPanning,
            NorthEastPanning,
            NorthWestPanning,
            SouthPanning,
            SouthEastPanning,
            SouthWestPanning,
            WestPanning,
            Move,
            VerticalText,
            Cell,
            ContextMenu,
            Alias,
            Progress,
            NoDrop,
            Copy,
            None,
            NotAllowed,
            ZoomIn,
            ZoomOut,
            Grab,
            Grabbing,
            Custom
        };

        static const Cursor& fromType(Cursor::Type);

        Cursor()
        {
        }

    };

    IntPoint determineHotSpot(Image*, const IntPoint& specifiedHotSpot);
    const char* nameForCursorType(Cursor::Type);
    
    static Cursor* _cursor = 0;
    static const Cursor& cursor() {
        if (_cursor == 0)
            _cursor = new Cursor();
        return *_cursor;
    }
    inline const Cursor& pointerCursor() { return cursor(); }
    inline const Cursor& crossCursor() { return cursor(); }
    inline const Cursor& handCursor() { return cursor(); }
    inline const Cursor& moveCursor() { return cursor(); }
    inline const Cursor& iBeamCursor() { return cursor(); }
    inline const Cursor& waitCursor() { return cursor(); }
    inline const Cursor& helpCursor() { return cursor(); }
    inline const Cursor& eastResizeCursor() { return cursor(); }
    inline const Cursor& northResizeCursor() { return cursor(); }
    inline const Cursor& northEastResizeCursor() { return cursor(); }
    inline const Cursor& northWestResizeCursor() { return cursor(); }
    inline const Cursor& southResizeCursor() { return cursor(); }
    inline const Cursor& southEastResizeCursor() { return cursor(); }
    inline const Cursor& southWestResizeCursor() { return cursor(); }
    inline const Cursor& westResizeCursor() { return cursor(); }
    inline const Cursor& northSouthResizeCursor() { return cursor(); }
    inline const Cursor& eastWestResizeCursor() { return cursor(); }
    inline const Cursor& northEastSouthWestResizeCursor() { return cursor(); }
    inline const Cursor& northWestSouthEastResizeCursor() { return cursor(); }
    inline const Cursor& columnResizeCursor() { return cursor(); }
    inline const Cursor& rowResizeCursor() { return cursor(); }
    inline const Cursor& middlePanningCursor() { return cursor(); }
    inline const Cursor& eastPanningCursor() { return cursor(); }
    inline const Cursor& northPanningCursor() { return cursor(); }
    inline const Cursor& northEastPanningCursor() { return cursor(); }
    inline const Cursor& northWestPanningCursor() { return cursor(); }
    inline const Cursor& southPanningCursor() { return cursor(); }
    inline const Cursor& southEastPanningCursor() { return cursor(); }
    inline const Cursor& southWestPanningCursor() { return cursor(); }
    inline const Cursor& westPanningCursor() { return cursor(); }
    inline const Cursor& verticalTextCursor() { return cursor(); }
    inline const Cursor& cellCursor() { return cursor(); }
    inline const Cursor& contextMenuCursor() { return cursor(); }
    inline const Cursor& noDropCursor() { return cursor(); }
    inline const Cursor& notAllowedCursor() { return cursor(); }
    inline const Cursor& progressCursor() { return cursor(); }
    inline const Cursor& aliasCursor() { return cursor(); }
    inline const Cursor& zoomInCursor() { return cursor(); }
    inline const Cursor& zoomOutCursor() { return cursor(); }
    inline const Cursor& copyCursor() { return cursor(); }
    inline const Cursor& noneCursor() { return cursor(); }
    inline const Cursor& grabCursor() { return cursor(); }
    inline const Cursor& grabbingCursor() { return cursor(); }

} // namespace WebCore

#endif // Cursor_h
