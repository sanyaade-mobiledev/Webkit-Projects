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
#include "JSImageData.h"

#include "ImageData.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSImageData);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSImageDataTableValues[4] =
{
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsImageDataWidth), (intptr_t)0 THUNK_GENERATOR(0) },
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsImageDataHeight), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsImageDataConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSImageDataTable = { 9, 7, JSImageDataTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSImageDataConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSImageDataConstructorTable = { 1, 0, JSImageDataConstructorTableValues, 0 };
class JSImageDataConstructor : public DOMConstructorObject {
public:
    JSImageDataConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSImageDataConstructor::s_info = { "ImageDataConstructor", &DOMConstructorObject::s_info, &JSImageDataConstructorTable, 0 };

JSImageDataConstructor::JSImageDataConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSImageDataPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSImageDataConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSImageDataConstructor, JSDOMWrapper>(exec, &JSImageDataConstructorTable, this, propertyName, slot);
}

bool JSImageDataConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSImageDataConstructor, JSDOMWrapper>(exec, &JSImageDataConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSImageDataPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSImageDataPrototypeTable = { 1, 0, JSImageDataPrototypeTableValues, 0 };
const ClassInfo JSImageDataPrototype::s_info = { "ImageDataPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSImageDataPrototypeTable, 0 };

JSObject* JSImageDataPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSImageData>(exec, globalObject);
}

const ClassInfo JSImageData::s_info = { "ImageData", &JSDOMWrapper::s_info, &JSImageDataTable, 0 };

JSImageData::JSImageData(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<ImageData> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSImageData::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSImageDataPrototype(exec->globalData(), globalObject, JSImageDataPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSImageData::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSImageData, Base>(exec, &JSImageDataTable, this, propertyName, slot);
}

bool JSImageData::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSImageData, Base>(exec, &JSImageDataTable, this, propertyName, descriptor);
}

JSValue jsImageDataWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSImageData* castedThis = static_cast<JSImageData*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ImageData* imp = static_cast<ImageData*>(castedThis->impl());
    JSValue result = jsNumber(imp->width());
    return result;
}


JSValue jsImageDataHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSImageData* castedThis = static_cast<JSImageData*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ImageData* imp = static_cast<ImageData*>(castedThis->impl());
    JSValue result = jsNumber(imp->height());
    return result;
}


JSValue jsImageDataConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSImageData* domObject = static_cast<JSImageData*>(asObject(slotBase));
    return JSImageData::getConstructor(exec, domObject->globalObject());
}

JSValue JSImageData::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSImageDataConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

ImageData* toImageData(JSC::JSValue value)
{
    return value.inherits(&JSImageData::s_info) ? static_cast<JSImageData*>(asObject(value))->impl() : 0;
}

}
