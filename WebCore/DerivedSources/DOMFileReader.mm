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

#if ENABLE(BLOB)

#import "DOMInternal.h"

#import "DOMFileReader.h"

#import "Blob.h"
#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMDOMObjectInternal.h"
#import "DOMEventInternal.h"
#import "DOMFileErrorInternal.h"
#import "DOMFileReaderInternal.h"
#import "DOMNodeInternal.h"
#import "DOMObject.h"
#import "DOMStyleSheetInternal.h"
#import "EventListener.h"
#import "ExceptionHandlers.h"
#import "FileError.h"
#import "FileReader.h"
#import "JSMainThreadExecState.h"
#import "KURL.h"
#import "ObjCEventListener.h"
#import "ThreadCheck.h"
#import "WebCoreObjCExtras.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL reinterpret_cast<WebCore::FileReader*>(_internal)

@implementation DOMFileReader

- (void)dealloc
{
    if (WebCoreObjCScheduleDeallocateOnMainThread([DOMFileReader class], self))
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

- (unsigned short)readyState
{
    WebCore::JSMainThreadNullState state;
    return IMPL->readyState();
}

- (DOMDOMObject *)result
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->result()));
}

- (DOMFileError *)error
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->error()));
}

- (id <DOMEventListener>)onloadstart
{
    WebCore::JSMainThreadNullState state;
    return kit(IMPL->onloadstart());
}

- (void)setOnloadstart:(id <DOMEventListener>)newOnloadstart
{
    WebCore::JSMainThreadNullState state;
    ASSERT(newOnloadstart);

    IMPL->setOnloadstart(WTF::getPtr(nativeEventListener));
}

- (id <DOMEventListener>)onprogress
{
    WebCore::JSMainThreadNullState state;
    return kit(IMPL->onprogress());
}

- (void)setOnprogress:(id <DOMEventListener>)newOnprogress
{
    WebCore::JSMainThreadNullState state;
    ASSERT(newOnprogress);

    IMPL->setOnprogress(WTF::getPtr(nativeEventListener));
}

- (id <DOMEventListener>)onload
{
    WebCore::JSMainThreadNullState state;
    return kit(IMPL->onload());
}

- (void)setOnload:(id <DOMEventListener>)newOnload
{
    WebCore::JSMainThreadNullState state;
    ASSERT(newOnload);

    IMPL->setOnload(WTF::getPtr(nativeEventListener));
}

- (id <DOMEventListener>)onabort
{
    WebCore::JSMainThreadNullState state;
    return kit(IMPL->onabort());
}

- (void)setOnabort:(id <DOMEventListener>)newOnabort
{
    WebCore::JSMainThreadNullState state;
    ASSERT(newOnabort);

    IMPL->setOnabort(WTF::getPtr(nativeEventListener));
}

- (id <DOMEventListener>)onerror
{
    WebCore::JSMainThreadNullState state;
    return kit(IMPL->onerror());
}

- (void)setOnerror:(id <DOMEventListener>)newOnerror
{
    WebCore::JSMainThreadNullState state;
    ASSERT(newOnerror);

    IMPL->setOnerror(WTF::getPtr(nativeEventListener));
}

- (id <DOMEventListener>)onloadend
{
    WebCore::JSMainThreadNullState state;
    return kit(IMPL->onloadend());
}

- (void)setOnloadend:(id <DOMEventListener>)newOnloadend
{
    WebCore::JSMainThreadNullState state;
    ASSERT(newOnloadend);

    IMPL->setOnloadend(WTF::getPtr(nativeEventListener));
}

- (void)readAsArrayBuffer:(DOMBlob *)blob
{
    WebCore::JSMainThreadNullState state;
    IMPL->readAsArrayBuffer(core(blob));
}

- (void)readAsBinaryString:(DOMBlob *)blob
{
    WebCore::JSMainThreadNullState state;
    IMPL->readAsBinaryString(core(blob));
}

- (void)readAsText:(DOMBlob *)blob encoding:(NSString *)encoding
{
    WebCore::JSMainThreadNullState state;
    IMPL->readAsText(core(blob), encoding);
}

- (void)readAsDataURL:(DOMBlob *)blob
{
    WebCore::JSMainThreadNullState state;
    IMPL->readAsDataURL(core(blob));
}

- (void)abort
{
    WebCore::JSMainThreadNullState state;
    IMPL->abort();
}

@end

WebCore::FileReader* core(DOMFileReader *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::FileReader*>(wrapper->_internal) : 0;
}

DOMFileReader *kit(WebCore::FileReader* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    if (!value)
        return nil;
    if (DOMFileReader *wrapper = getDOMWrapper(value))
        return [[wrapper retain] autorelease];
    DOMFileReader *wrapper = [[DOMFileReader alloc] _init];
    wrapper->_internal = reinterpret_cast<DOMObjectInternal*>(value);
    value->ref();
    addDOMWrapper(wrapper, value);
    return [wrapper autorelease];
}

#endif // ENABLE(BLOB)
