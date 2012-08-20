/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSNavigator.h"

#include "DOMMimeTypeArray.h"
#include "DOMPluginArray.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDOMMimeTypeArray.h"
#include "JSDOMPluginArray.h"
#include "KURL.h"
#include "Navigator.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSNavigator);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSNavigatorTableValues[16] =
{
    { "appCodeName", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNavigatorAppCodeName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "appName", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNavigatorAppName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "appVersion", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNavigatorAppVersion), (intptr_t)0 THUNK_GENERATOR(0) },
    { "language", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNavigatorLanguage), (intptr_t)0 THUNK_GENERATOR(0) },
    { "userAgent", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNavigatorUserAgent), (intptr_t)0 THUNK_GENERATOR(0) },
    { "platform", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNavigatorPlatform), (intptr_t)0 THUNK_GENERATOR(0) },
    { "plugins", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNavigatorPlugins), (intptr_t)0 THUNK_GENERATOR(0) },
    { "mimeTypes", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNavigatorMimeTypes), (intptr_t)0 THUNK_GENERATOR(0) },
    { "product", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNavigatorProduct), (intptr_t)0 THUNK_GENERATOR(0) },
    { "productSub", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNavigatorProductSub), (intptr_t)0 THUNK_GENERATOR(0) },
    { "vendor", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNavigatorVendor), (intptr_t)0 THUNK_GENERATOR(0) },
    { "vendorSub", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNavigatorVendorSub), (intptr_t)0 THUNK_GENERATOR(0) },
    { "cookieEnabled", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNavigatorCookieEnabled), (intptr_t)0 THUNK_GENERATOR(0) },
    { "onLine", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNavigatorOnLine), (intptr_t)0 THUNK_GENERATOR(0) },
    { "standalone", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNavigatorStandalone), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSNavigatorTable = { 36, 31, JSNavigatorTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSNavigatorPrototypeTableValues[2] =
{
    { "javaEnabled", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNavigatorPrototypeFunctionJavaEnabled), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSNavigatorPrototypeTable = { 2, 1, JSNavigatorPrototypeTableValues, 0 };
const ClassInfo JSNavigatorPrototype::s_info = { "NavigatorPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSNavigatorPrototypeTable, 0 };

JSObject* JSNavigatorPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSNavigator>(exec, globalObject);
}

bool JSNavigatorPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSNavigatorPrototypeTable, this, propertyName, slot);
}

bool JSNavigatorPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSNavigatorPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSNavigator::s_info = { "Navigator", &JSDOMWrapper::s_info, &JSNavigatorTable, 0 };

JSNavigator::JSNavigator(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Navigator> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSNavigator::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSNavigatorPrototype(exec->globalData(), globalObject, JSNavigatorPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSNavigator::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSNavigator, Base>(exec, &JSNavigatorTable, this, propertyName, slot);
}

bool JSNavigator::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSNavigator, Base>(exec, &JSNavigatorTable, this, propertyName, descriptor);
}

JSValue jsNavigatorAppCodeName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNavigator* castedThis = static_cast<JSNavigator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Navigator* imp = static_cast<Navigator*>(castedThis->impl());
    JSValue result = jsString(exec, imp->appCodeName());
    return result;
}


JSValue jsNavigatorAppName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNavigator* castedThis = static_cast<JSNavigator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Navigator* imp = static_cast<Navigator*>(castedThis->impl());
    JSValue result = jsString(exec, imp->appName());
    return result;
}


JSValue jsNavigatorAppVersion(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNavigator* castedThis = static_cast<JSNavigator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Navigator* imp = static_cast<Navigator*>(castedThis->impl());
    JSValue result = jsString(exec, imp->appVersion());
    return result;
}


JSValue jsNavigatorLanguage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNavigator* castedThis = static_cast<JSNavigator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Navigator* imp = static_cast<Navigator*>(castedThis->impl());
    JSValue result = jsString(exec, imp->language());
    return result;
}


JSValue jsNavigatorUserAgent(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNavigator* castedThis = static_cast<JSNavigator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Navigator* imp = static_cast<Navigator*>(castedThis->impl());
    JSValue result = jsString(exec, imp->userAgent());
    return result;
}


JSValue jsNavigatorPlatform(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNavigator* castedThis = static_cast<JSNavigator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Navigator* imp = static_cast<Navigator*>(castedThis->impl());
    JSValue result = jsString(exec, imp->platform());
    return result;
}


JSValue jsNavigatorPlugins(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNavigator* castedThis = static_cast<JSNavigator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Navigator* imp = static_cast<Navigator*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->plugins()));
    return result;
}


JSValue jsNavigatorMimeTypes(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNavigator* castedThis = static_cast<JSNavigator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Navigator* imp = static_cast<Navigator*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->mimeTypes()));
    return result;
}


JSValue jsNavigatorProduct(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNavigator* castedThis = static_cast<JSNavigator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Navigator* imp = static_cast<Navigator*>(castedThis->impl());
    JSValue result = jsString(exec, imp->product());
    return result;
}


JSValue jsNavigatorProductSub(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNavigator* castedThis = static_cast<JSNavigator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Navigator* imp = static_cast<Navigator*>(castedThis->impl());
    JSValue result = jsString(exec, imp->productSub());
    return result;
}


JSValue jsNavigatorVendor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNavigator* castedThis = static_cast<JSNavigator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Navigator* imp = static_cast<Navigator*>(castedThis->impl());
    JSValue result = jsString(exec, imp->vendor());
    return result;
}


JSValue jsNavigatorVendorSub(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNavigator* castedThis = static_cast<JSNavigator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Navigator* imp = static_cast<Navigator*>(castedThis->impl());
    JSValue result = jsString(exec, imp->vendorSub());
    return result;
}


JSValue jsNavigatorCookieEnabled(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNavigator* castedThis = static_cast<JSNavigator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Navigator* imp = static_cast<Navigator*>(castedThis->impl());
    JSValue result = jsBoolean(imp->cookieEnabled());
    return result;
}


JSValue jsNavigatorOnLine(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNavigator* castedThis = static_cast<JSNavigator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Navigator* imp = static_cast<Navigator*>(castedThis->impl());
    JSValue result = jsBoolean(imp->onLine());
    return result;
}


JSValue jsNavigatorStandalone(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNavigator* castedThis = static_cast<JSNavigator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Navigator* imp = static_cast<Navigator*>(castedThis->impl());
    JSValue result = jsBoolean(imp->standalone());
    return result;
}


EncodedJSValue JSC_HOST_CALL jsNavigatorPrototypeFunctionJavaEnabled(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNavigator::s_info))
        return throwVMTypeError(exec);
    JSNavigator* castedThis = static_cast<JSNavigator*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNavigator::s_info);
    Navigator* imp = static_cast<Navigator*>(castedThis->impl());


    JSC::JSValue result = jsBoolean(imp->javaEnabled());
    return JSValue::encode(result);
}

static inline bool isObservable(JSNavigator* jsNavigator)
{
    if (jsNavigator->hasCustomProperties())
        return true;
    return false;
}

bool JSNavigatorOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSNavigator* jsNavigator = static_cast<JSNavigator*>(handle.get().asCell());
    if (!isObservable(jsNavigator))
        return false;
    Frame* root = jsNavigator->impl()->frame();
    if (!root)
        return false;
    return visitor.containsOpaqueRoot(root);
}

void JSNavigatorOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSNavigator* jsNavigator = static_cast<JSNavigator*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsNavigator->impl(), jsNavigator);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Navigator* impl)
{
    return wrap<JSNavigator>(exec, globalObject, impl);
}

Navigator* toNavigator(JSC::JSValue value)
{
    return value.inherits(&JSNavigator::s_info) ? static_cast<JSNavigator*>(asObject(value))->impl() : 0;
}

}
