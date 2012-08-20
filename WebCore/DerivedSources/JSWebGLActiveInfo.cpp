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

#if ENABLE(WEBGL)

#include "JSWebGLActiveInfo.h"

#include "KURL.h"
#include "WebGLActiveInfo.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebGLActiveInfo);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLActiveInfoTableValues[5] =
{
    { "size", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLActiveInfoSize), (intptr_t)0 THUNK_GENERATOR(0) },
    { "type", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLActiveInfoType), (intptr_t)0 THUNK_GENERATOR(0) },
    { "name", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLActiveInfoName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLActiveInfoConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLActiveInfoTable = { 9, 7, JSWebGLActiveInfoTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLActiveInfoConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLActiveInfoConstructorTable = { 1, 0, JSWebGLActiveInfoConstructorTableValues, 0 };
class JSWebGLActiveInfoConstructor : public DOMConstructorObject {
public:
    JSWebGLActiveInfoConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSWebGLActiveInfoConstructor::s_info = { "WebGLActiveInfoConstructor", &DOMConstructorObject::s_info, &JSWebGLActiveInfoConstructorTable, 0 };

JSWebGLActiveInfoConstructor::JSWebGLActiveInfoConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSWebGLActiveInfoPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSWebGLActiveInfoConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebGLActiveInfoConstructor, JSDOMWrapper>(exec, &JSWebGLActiveInfoConstructorTable, this, propertyName, slot);
}

bool JSWebGLActiveInfoConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWebGLActiveInfoConstructor, JSDOMWrapper>(exec, &JSWebGLActiveInfoConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLActiveInfoPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLActiveInfoPrototypeTable = { 1, 0, JSWebGLActiveInfoPrototypeTableValues, 0 };
const ClassInfo JSWebGLActiveInfoPrototype::s_info = { "WebGLActiveInfoPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSWebGLActiveInfoPrototypeTable, 0 };

JSObject* JSWebGLActiveInfoPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLActiveInfo>(exec, globalObject);
}

const ClassInfo JSWebGLActiveInfo::s_info = { "WebGLActiveInfo", &JSDOMWrapper::s_info, &JSWebGLActiveInfoTable, 0 };

JSWebGLActiveInfo::JSWebGLActiveInfo(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLActiveInfo> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSWebGLActiveInfo::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSWebGLActiveInfoPrototype(exec->globalData(), globalObject, JSWebGLActiveInfoPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSWebGLActiveInfo::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSWebGLActiveInfo, Base>(exec, &JSWebGLActiveInfoTable, this, propertyName, slot);
}

bool JSWebGLActiveInfo::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSWebGLActiveInfo, Base>(exec, &JSWebGLActiveInfoTable, this, propertyName, descriptor);
}

JSValue jsWebGLActiveInfoSize(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWebGLActiveInfo* castedThis = static_cast<JSWebGLActiveInfo*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebGLActiveInfo* imp = static_cast<WebGLActiveInfo*>(castedThis->impl());
    JSValue result = jsNumber(imp->size());
    return result;
}


JSValue jsWebGLActiveInfoType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWebGLActiveInfo* castedThis = static_cast<JSWebGLActiveInfo*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebGLActiveInfo* imp = static_cast<WebGLActiveInfo*>(castedThis->impl());
    JSValue result = jsNumber(imp->type());
    return result;
}


JSValue jsWebGLActiveInfoName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWebGLActiveInfo* castedThis = static_cast<JSWebGLActiveInfo*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebGLActiveInfo* imp = static_cast<WebGLActiveInfo*>(castedThis->impl());
    JSValue result = jsString(exec, imp->name());
    return result;
}


JSValue jsWebGLActiveInfoConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWebGLActiveInfo* domObject = static_cast<JSWebGLActiveInfo*>(asObject(slotBase));
    return JSWebGLActiveInfo::getConstructor(exec, domObject->globalObject());
}

JSValue JSWebGLActiveInfo::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebGLActiveInfoConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebGLActiveInfo* impl)
{
    return wrap<JSWebGLActiveInfo>(exec, globalObject, impl);
}

WebGLActiveInfo* toWebGLActiveInfo(JSC::JSValue value)
{
    return value.inherits(&JSWebGLActiveInfo::s_info) ? static_cast<JSWebGLActiveInfo*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WEBGL)
