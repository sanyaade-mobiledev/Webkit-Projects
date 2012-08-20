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

#include "JSWebGLUniformLocation.h"

#include "WebGLUniformLocation.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebGLUniformLocation);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLUniformLocationTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLUniformLocationConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLUniformLocationTable = { 2, 1, JSWebGLUniformLocationTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLUniformLocationConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLUniformLocationConstructorTable = { 1, 0, JSWebGLUniformLocationConstructorTableValues, 0 };
class JSWebGLUniformLocationConstructor : public DOMConstructorObject {
public:
    JSWebGLUniformLocationConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSWebGLUniformLocationConstructor::s_info = { "WebGLUniformLocationConstructor", &DOMConstructorObject::s_info, &JSWebGLUniformLocationConstructorTable, 0 };

JSWebGLUniformLocationConstructor::JSWebGLUniformLocationConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSWebGLUniformLocationPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSWebGLUniformLocationConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebGLUniformLocationConstructor, JSDOMWrapper>(exec, &JSWebGLUniformLocationConstructorTable, this, propertyName, slot);
}

bool JSWebGLUniformLocationConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWebGLUniformLocationConstructor, JSDOMWrapper>(exec, &JSWebGLUniformLocationConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLUniformLocationPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLUniformLocationPrototypeTable = { 1, 0, JSWebGLUniformLocationPrototypeTableValues, 0 };
const ClassInfo JSWebGLUniformLocationPrototype::s_info = { "WebGLUniformLocationPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSWebGLUniformLocationPrototypeTable, 0 };

JSObject* JSWebGLUniformLocationPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLUniformLocation>(exec, globalObject);
}

const ClassInfo JSWebGLUniformLocation::s_info = { "WebGLUniformLocation", &JSDOMWrapper::s_info, &JSWebGLUniformLocationTable, 0 };

JSWebGLUniformLocation::JSWebGLUniformLocation(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLUniformLocation> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSWebGLUniformLocation::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSWebGLUniformLocationPrototype(exec->globalData(), globalObject, JSWebGLUniformLocationPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSWebGLUniformLocation::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSWebGLUniformLocation, Base>(exec, &JSWebGLUniformLocationTable, this, propertyName, slot);
}

bool JSWebGLUniformLocation::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSWebGLUniformLocation, Base>(exec, &JSWebGLUniformLocationTable, this, propertyName, descriptor);
}

JSValue jsWebGLUniformLocationConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWebGLUniformLocation* domObject = static_cast<JSWebGLUniformLocation*>(asObject(slotBase));
    return JSWebGLUniformLocation::getConstructor(exec, domObject->globalObject());
}

JSValue JSWebGLUniformLocation::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebGLUniformLocationConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebGLUniformLocation* impl)
{
    return wrap<JSWebGLUniformLocation>(exec, globalObject, impl);
}

WebGLUniformLocation* toWebGLUniformLocation(JSC::JSValue value)
{
    return value.inherits(&JSWebGLUniformLocation::s_info) ? static_cast<JSWebGLUniformLocation*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WEBGL)
