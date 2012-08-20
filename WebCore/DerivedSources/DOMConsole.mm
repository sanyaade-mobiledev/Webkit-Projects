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

#import "DOMConsole.h"

#import "Console.h"
#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMConsoleInternal.h"
#import "DOMEventInternal.h"
#import "DOMMemoryInfoInternal.h"
#import "DOMNodeInternal.h"
#import "DOMStyleSheetInternal.h"
#import "ExceptionHandlers.h"
#import "JSMainThreadExecState.h"
#import "KURL.h"
#import "MemoryInfo.h"
#import "ThreadCheck.h"
#import "WebCoreObjCExtras.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL reinterpret_cast<WebCore::Console*>(_internal)

@implementation DOMConsole

- (void)dealloc
{
    if (WebCoreObjCScheduleDeallocateOnMainThread([DOMConsole class], self))
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

- (DOMMemoryInfo *)memory
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->memory()));
}

- (void)debug
{
    WebCore::JSMainThreadNullState state;
    IMPL->debug();
}

- (void)error
{
    WebCore::JSMainThreadNullState state;
    IMPL->error();
}

- (void)info
{
    WebCore::JSMainThreadNullState state;
    IMPL->info();
}

- (void)log
{
    WebCore::JSMainThreadNullState state;
    IMPL->log();
}

- (void)warn
{
    WebCore::JSMainThreadNullState state;
    IMPL->warn();
}

- (void)dir
{
    WebCore::JSMainThreadNullState state;
    IMPL->dir();
}

- (void)dirxml
{
    WebCore::JSMainThreadNullState state;
    IMPL->dirxml();
}

- (void)trace
{
    WebCore::JSMainThreadNullState state;
    IMPL->trace();
}

- (void)assert:(BOOL)condition
{
    WebCore::JSMainThreadNullState state;
    IMPL->assert(condition);
}

- (void)count
{
    WebCore::JSMainThreadNullState state;
    IMPL->count();
}

- (void)markTimeline
{
    WebCore::JSMainThreadNullState state;
    IMPL->markTimeline();
}

- (void)time:(NSString *)title
{
    WebCore::JSMainThreadNullState state;
    IMPL->time(title);
}

- (void)timeEnd:(NSString *)title
{
    WebCore::JSMainThreadNullState state;
    IMPL->timeEnd(title);
}

- (void)group
{
    WebCore::JSMainThreadNullState state;
    IMPL->group();
}

- (void)groupCollapsed
{
    WebCore::JSMainThreadNullState state;
    IMPL->groupCollapsed();
}

- (void)groupEnd
{
    WebCore::JSMainThreadNullState state;
    IMPL->groupEnd();
}

@end

WebCore::Console* core(DOMConsole *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::Console*>(wrapper->_internal) : 0;
}

DOMConsole *kit(WebCore::Console* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    if (!value)
        return nil;
    if (DOMConsole *wrapper = getDOMWrapper(value))
        return [[wrapper retain] autorelease];
    DOMConsole *wrapper = [[DOMConsole alloc] _init];
    wrapper->_internal = reinterpret_cast<DOMObjectInternal*>(value);
    value->ref();
    addDOMWrapper(wrapper, value);
    return [wrapper autorelease];
}
