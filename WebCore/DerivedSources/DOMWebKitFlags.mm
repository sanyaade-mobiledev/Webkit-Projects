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

#if ENABLE(FILE_SYSTEM)

#import "DOMInternal.h"

#import "DOMWebKitFlags.h"

#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMEventInternal.h"
#import "DOMNodeInternal.h"
#import "DOMStyleSheetInternal.h"
#import "DOMWebKitFlagsInternal.h"
#import "ExceptionHandlers.h"
#import "JSMainThreadExecState.h"
#import "ThreadCheck.h"
#import "WebCoreObjCExtras.h"
#import "WebKitFlags.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL reinterpret_cast<WebCore::WebKitFlags*>(_internal)

@implementation DOMWebKitFlags

- (void)dealloc
{
    if (WebCoreObjCScheduleDeallocateOnMainThread([DOMWebKitFlags class], self))
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

- (BOOL)create
{
    WebCore::JSMainThreadNullState state;
    return IMPL->isCreate();
}

- (void)setCreate:(BOOL)newCreate
{
    WebCore::JSMainThreadNullState state;
    IMPL->setCreate(newCreate);
}

- (BOOL)exclusive
{
    WebCore::JSMainThreadNullState state;
    return IMPL->isExclusive();
}

- (void)setExclusive:(BOOL)newExclusive
{
    WebCore::JSMainThreadNullState state;
    IMPL->setExclusive(newExclusive);
}

@end

WebCore::WebKitFlags* core(DOMWebKitFlags *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::WebKitFlags*>(wrapper->_internal) : 0;
}

DOMWebKitFlags *kit(WebCore::WebKitFlags* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    if (!value)
        return nil;
    if (DOMWebKitFlags *wrapper = getDOMWrapper(value))
        return [[wrapper retain] autorelease];
    DOMWebKitFlags *wrapper = [[DOMWebKitFlags alloc] _init];
    wrapper->_internal = reinterpret_cast<DOMObjectInternal*>(value);
    value->ref();
    addDOMWrapper(wrapper, value);
    return [wrapper autorelease];
}

#endif // ENABLE(FILE_SYSTEM)
