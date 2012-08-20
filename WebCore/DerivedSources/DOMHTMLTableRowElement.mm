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

#import "DOMHTMLTableRowElement.h"

#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMEventInternal.h"
#import "DOMHTMLCollectionInternal.h"
#import "DOMHTMLElementInternal.h"
#import "DOMHTMLTableRowElementInternal.h"
#import "DOMNodeInternal.h"
#import "DOMStyleSheetInternal.h"
#import "ExceptionHandlers.h"
#import "HTMLCollection.h"
#import "HTMLElement.h"
#import "HTMLNames.h"
#import "HTMLTableRowElement.h"
#import "JSMainThreadExecState.h"
#import "KURL.h"
#import "ThreadCheck.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL static_cast<WebCore::HTMLTableRowElement*>(reinterpret_cast<WebCore::Node*>(_internal))

@implementation DOMHTMLTableRowElement

- (int)rowIndex
{
    WebCore::JSMainThreadNullState state;
    return IMPL->rowIndex();
}

- (int)sectionRowIndex
{
    WebCore::JSMainThreadNullState state;
    return IMPL->sectionRowIndex();
}

- (DOMHTMLCollection *)cells
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->cells()));
}

- (NSString *)align
{
    WebCore::JSMainThreadNullState state;
    return IMPL->getAttribute(WebCore::HTMLNames::alignAttr);
}

- (void)setAlign:(NSString *)newAlign
{
    WebCore::JSMainThreadNullState state;
    IMPL->setAttribute(WebCore::HTMLNames::alignAttr, newAlign);
}

- (NSString *)bgColor
{
    WebCore::JSMainThreadNullState state;
    return IMPL->getAttribute(WebCore::HTMLNames::bgcolorAttr);
}

- (void)setBgColor:(NSString *)newBgColor
{
    WebCore::JSMainThreadNullState state;
    IMPL->setAttribute(WebCore::HTMLNames::bgcolorAttr, newBgColor);
}

- (NSString *)ch
{
    WebCore::JSMainThreadNullState state;
    return IMPL->getAttribute(WebCore::HTMLNames::charAttr);
}

- (void)setCh:(NSString *)newCh
{
    WebCore::JSMainThreadNullState state;
    IMPL->setAttribute(WebCore::HTMLNames::charAttr, newCh);
}

- (NSString *)chOff
{
    WebCore::JSMainThreadNullState state;
    return IMPL->getAttribute(WebCore::HTMLNames::charoffAttr);
}

- (void)setChOff:(NSString *)newChOff
{
    WebCore::JSMainThreadNullState state;
    IMPL->setAttribute(WebCore::HTMLNames::charoffAttr, newChOff);
}

- (NSString *)vAlign
{
    WebCore::JSMainThreadNullState state;
    return IMPL->getAttribute(WebCore::HTMLNames::valignAttr);
}

- (void)setVAlign:(NSString *)newVAlign
{
    WebCore::JSMainThreadNullState state;
    IMPL->setAttribute(WebCore::HTMLNames::valignAttr, newVAlign);
}

- (DOMHTMLElement *)insertCell:(int)index
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    DOMHTMLElement *result = kit(WTF::getPtr(IMPL->insertCell(index, ec)));
    WebCore::raiseOnDOMError(ec);
    return result;
}

- (void)deleteCell:(int)index
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    IMPL->deleteCell(index, ec);
    WebCore::raiseOnDOMError(ec);
}

@end

WebCore::HTMLTableRowElement* core(DOMHTMLTableRowElement *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::HTMLTableRowElement*>(wrapper->_internal) : 0;
}

DOMHTMLTableRowElement *kit(WebCore::HTMLTableRowElement* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    return static_cast<DOMHTMLTableRowElement*>(kit(static_cast<WebCore::Node*>(value)));
}
