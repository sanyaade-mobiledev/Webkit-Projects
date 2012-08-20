/*
 * This file is part of the WebKit open source project.
 * This file has been generated by generate-bindings.pl. DO NOT MODIFY!
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

#import "config.h"
#import "DOMInternal.h"

#import "DOMCSSStyleDeclaration.h"

#import "CSSRule.h"
#import "CSSStyleDeclaration.h"
#import "CSSValue.h"
#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSStyleDeclarationInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMEventInternal.h"
#import "DOMNodeInternal.h"
#import "DOMStyleSheetInternal.h"
#import "ExceptionHandlers.h"
#import "JSMainThreadExecState.h"
#import "KURL.h"
#import "ThreadCheck.h"
#import "WebCoreObjCExtras.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL reinterpret_cast<WebCore::CSSStyleDeclaration*>(_internal)

@implementation DOMCSSStyleDeclaration

- (void)dealloc
{
    if (WebCoreObjCScheduleDeallocateOnMainThread([DOMCSSStyleDeclaration class], self))
        return;

    if (_internal)
        IMPL->deref();
    [super dealloc];
}

- (void)finalize
{
    if (_internal)
        IMPL->deref();
    [super finalize];
}

- (NSString *)cssText
{
    WebCore::JSMainThreadNullState state;
    return IMPL->cssText();
}

- (void)setCssText:(NSString *)newCssText
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    IMPL->setCssText(newCssText, ec);
    WebCore::raiseOnDOMError(ec);
}

- (unsigned)length
{
    WebCore::JSMainThreadNullState state;
    return IMPL->length();
}

- (DOMCSSRule *)parentRule
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->parentRule()));
}

- (NSString *)getPropertyValue:(NSString *)propertyName
{
    WebCore::JSMainThreadNullState state;
    return IMPL->getPropertyValue(propertyName);
}

- (DOMCSSValue *)getPropertyCSSValue:(NSString *)propertyName
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->getPropertyCSSValue(propertyName)));
}

- (NSString *)removeProperty:(NSString *)propertyName
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    NSString *result = IMPL->removeProperty(propertyName, ec);
    WebCore::raiseOnDOMError(ec);
    return result;
}

- (NSString *)getPropertyPriority:(NSString *)propertyName
{
    WebCore::JSMainThreadNullState state;
    return IMPL->getPropertyPriority(propertyName);
}

- (void)setProperty:(NSString *)propertyName value:(NSString *)value priority:(NSString *)priority
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    IMPL->setProperty(propertyName, value, priority, ec);
    WebCore::raiseOnDOMError(ec);
}

- (void)setProperty:(NSString *)propertyName :(NSString *)value :(NSString *)priority
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    IMPL->setProperty(propertyName, value, priority, ec);
    WebCore::raiseOnDOMError(ec);
}

- (NSString *)item:(unsigned)index
{
    WebCore::JSMainThreadNullState state;
    return IMPL->item(index);
}

- (NSString *)getPropertyShorthand:(NSString *)propertyName
{
    WebCore::JSMainThreadNullState state;
    return IMPL->getPropertyShorthand(propertyName);
}

- (BOOL)isPropertyImplicit:(NSString *)propertyName
{
    WebCore::JSMainThreadNullState state;
    return IMPL->isPropertyImplicit(propertyName);
}

@end

WebCore::CSSStyleDeclaration* core(DOMCSSStyleDeclaration *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::CSSStyleDeclaration*>(wrapper->_internal) : 0;
}

DOMCSSStyleDeclaration *kit(WebCore::CSSStyleDeclaration* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    if (!value)
        return nil;
    if (DOMCSSStyleDeclaration *wrapper = getDOMWrapper(value))
        return [[wrapper retain] autorelease];
    DOMCSSStyleDeclaration *wrapper = [[DOMCSSStyleDeclaration alloc] _init];
    wrapper->_internal = reinterpret_cast<DOMObjectInternal*>(value);
    value->ref();
    addDOMWrapper(wrapper, value);
    return [wrapper autorelease];
}
