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

#if ENABLE(DEVICE_ORIENTATION)

#import "DOMInternal.h"

#import "DOMDeviceOrientationEvent.h"

#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMDeviceOrientationEventInternal.h"
#import "DOMEventInternal.h"
#import "DOMNodeInternal.h"
#import "DOMStyleSheetInternal.h"
#import "DeviceOrientationEvent.h"
#import "ExceptionHandlers.h"
#import "JSMainThreadExecState.h"
#import "KURL.h"
#import "ThreadCheck.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL static_cast<WebCore::DeviceOrientationEvent*>(reinterpret_cast<WebCore::Event*>(_internal))

@implementation DOMDeviceOrientationEvent

- (double)alpha
{
    WebCore::JSMainThreadNullState state;
    return IMPL->alpha();
}

- (double)beta
{
    WebCore::JSMainThreadNullState state;
    return IMPL->beta();
}

- (double)gamma
{
    WebCore::JSMainThreadNullState state;
    return IMPL->gamma();
}

- (double)webkitCompassHeading
{
    WebCore::JSMainThreadNullState state;
    return IMPL->webkitCompassHeading();
}

- (double)webkitCompassAccuracy
{
    WebCore::JSMainThreadNullState state;
    return IMPL->webkitCompassAccuracy();
}

- (void)initDeviceOrientationEvent:(NSString *)type bubbles:(BOOL)bubbles cancelable:(BOOL)cancelable alpha:(double)inAlpha beta:(double)inBeta gamma:(double)inGamma compassHeading:(double)compassHeading compassAccuracy:(double)compassAccuracy
{
    WebCore::JSMainThreadNullState state;
    IMPL->initDeviceOrientationEvent(type, bubbles, cancelable, inAlpha, inBeta, inGamma, compassHeading, compassAccuracy);
}

@end

WebCore::DeviceOrientationEvent* core(DOMDeviceOrientationEvent *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::DeviceOrientationEvent*>(wrapper->_internal) : 0;
}

DOMDeviceOrientationEvent *kit(WebCore::DeviceOrientationEvent* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    return static_cast<DOMDeviceOrientationEvent*>(kit(static_cast<WebCore::Event*>(value)));
}

#endif // ENABLE(DEVICE_ORIENTATION)
