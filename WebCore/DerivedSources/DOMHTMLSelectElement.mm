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

#import "DOMHTMLSelectElement.h"

#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMEventInternal.h"
#import "DOMHTMLElementInternal.h"
#import "DOMHTMLFormElementInternal.h"
#import "DOMHTMLOptionsCollectionInternal.h"
#import "DOMHTMLSelectElementInternal.h"
#import "DOMNodeInternal.h"
#import "DOMNodeListInternal.h"
#import "DOMStyleSheetInternal.h"
#import "DOMValidityStateInternal.h"
#import "ExceptionHandlers.h"
#import "HTMLElement.h"
#import "HTMLFormElement.h"
#import "HTMLNames.h"
#import "HTMLOptionsCollection.h"
#import "HTMLSelectElement.h"
#import "JSMainThreadExecState.h"
#import "KURL.h"
#import "NameNodeList.h"
#import "Node.h"
#import "NodeList.h"
#import "ThreadCheck.h"
#import "ValidityState.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL static_cast<WebCore::HTMLSelectElement*>(reinterpret_cast<WebCore::Node*>(_internal))

@implementation DOMHTMLSelectElement

- (NSString *)type
{
    WebCore::JSMainThreadNullState state;
    return IMPL->type();
}

- (int)selectedIndex
{
    WebCore::JSMainThreadNullState state;
    return IMPL->selectedIndex();
}

- (void)setSelectedIndex:(int)newSelectedIndex
{
    WebCore::JSMainThreadNullState state;
    IMPL->setSelectedIndex(newSelectedIndex);
}

- (NSString *)value
{
    WebCore::JSMainThreadNullState state;
    return IMPL->value();
}

- (void)setValue:(NSString *)newValue
{
    WebCore::JSMainThreadNullState state;
    IMPL->setValue(newValue);
}

- (int)length
{
    WebCore::JSMainThreadNullState state;
    return IMPL->length();
}

- (DOMHTMLFormElement *)form
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->form()));
}

- (DOMValidityState *)validity
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->validity()));
}

- (BOOL)willValidate
{
    WebCore::JSMainThreadNullState state;
    return IMPL->willValidate();
}

- (NSString *)validationMessage
{
    WebCore::JSMainThreadNullState state;
    return IMPL->validationMessage();
}

- (DOMHTMLOptionsCollection *)options
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->options()));
}

- (BOOL)disabled
{
    WebCore::JSMainThreadNullState state;
    return IMPL->hasAttribute(WebCore::HTMLNames::disabledAttr);
}

- (void)setDisabled:(BOOL)newDisabled
{
    WebCore::JSMainThreadNullState state;
    IMPL->setBooleanAttribute(WebCore::HTMLNames::disabledAttr, newDisabled);
}

- (BOOL)autofocus
{
    WebCore::JSMainThreadNullState state;
    return IMPL->hasAttribute(WebCore::HTMLNames::autofocusAttr);
}

- (void)setAutofocus:(BOOL)newAutofocus
{
    WebCore::JSMainThreadNullState state;
    IMPL->setBooleanAttribute(WebCore::HTMLNames::autofocusAttr, newAutofocus);
}

- (BOOL)multiple
{
    WebCore::JSMainThreadNullState state;
    return IMPL->multiple();
}

- (void)setMultiple:(BOOL)newMultiple
{
    WebCore::JSMainThreadNullState state;
    IMPL->setMultiple(newMultiple);
}

- (NSString *)name
{
    WebCore::JSMainThreadNullState state;
    return IMPL->name();
}

- (void)setName:(NSString *)newName
{
    WebCore::JSMainThreadNullState state;
    IMPL->setName(newName);
}

- (BOOL)required
{
    WebCore::JSMainThreadNullState state;
    return IMPL->hasAttribute(WebCore::HTMLNames::requiredAttr);
}

- (void)setRequired:(BOOL)newRequired
{
    WebCore::JSMainThreadNullState state;
    IMPL->setBooleanAttribute(WebCore::HTMLNames::requiredAttr, newRequired);
}

- (int)size
{
    WebCore::JSMainThreadNullState state;
    return IMPL->size();
}

- (void)setSize:(int)newSize
{
    WebCore::JSMainThreadNullState state;
    IMPL->setSize(newSize);
}

- (DOMNodeList *)labels
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->labels()));
}

- (BOOL)checkValidity
{
    WebCore::JSMainThreadNullState state;
    return IMPL->checkValidity();
}

- (void)setCustomValidity:(NSString *)error
{
    WebCore::JSMainThreadNullState state;
    IMPL->setCustomValidity(error);
}

- (void)add:(DOMHTMLElement *)element before:(DOMHTMLElement *)before
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    IMPL->add(core(element), core(before), ec);
    WebCore::raiseOnDOMError(ec);
}

- (void)add:(DOMHTMLElement *)element :(DOMHTMLElement *)before
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    IMPL->add(core(element), core(before), ec);
    WebCore::raiseOnDOMError(ec);
}

- (void)remove:(int)index
{
    WebCore::JSMainThreadNullState state;
    IMPL->remove(index);
}

- (DOMNode *)item:(unsigned)index
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->item(index)));
}

- (DOMNode *)namedItem:(NSString *)inName
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->namedItem(inName)));
}

@end

WebCore::HTMLSelectElement* core(DOMHTMLSelectElement *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::HTMLSelectElement*>(wrapper->_internal) : 0;
}

DOMHTMLSelectElement *kit(WebCore::HTMLSelectElement* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    return static_cast<DOMHTMLSelectElement*>(kit(static_cast<WebCore::Node*>(value)));
}
