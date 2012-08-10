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

#import "DOMFileEntrySync.h"

#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMEventInternal.h"
#import "DOMFileEntrySyncInternal.h"
#import "DOMFileInternal.h"
#import "DOMFileWriterSyncInternal.h"
#import "DOMNodeInternal.h"
#import "DOMStyleSheetInternal.h"
#import "ExceptionHandlers.h"
#import "File.h"
#import "FileEntrySync.h"
#import "FileWriterSync.h"
#import "JSMainThreadExecState.h"
#import "ThreadCheck.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL static_cast<WebCore::FileEntrySync*>(reinterpret_cast<WebCore::Node*>(_internal))

@implementation DOMFileEntrySync

- (DOMFile *)file
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    DOMFile *result = kit(WTF::getPtr(IMPL->file(ec)));
    WebCore::raiseOnDOMError(ec);
    return result;
}

- (DOMFileWriterSync *)createWriter
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    DOMFileWriterSync *result = kit(WTF::getPtr(IMPL->createWriter(ec)));
    WebCore::raiseOnDOMError(ec);
    return result;
}

@end

WebCore::FileEntrySync* core(DOMFileEntrySync *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::FileEntrySync*>(wrapper->_internal) : 0;
}

DOMFileEntrySync *kit(WebCore::FileEntrySync* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    return static_cast<DOMFileEntrySync*>(kit(static_cast<WebCore::Node*>(value)));
}

#endif // ENABLE(FILE_SYSTEM)