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
#include "JSUint32Array.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSUint32Array.h"
#include "Uint32Array.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSUint32Array);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSUint32ArrayTableValues[3] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUint32ArrayLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUint32ArrayConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSUint32ArrayTable = { 5, 3, JSUint32ArrayTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSUint32ArrayConstructorTableValues[2] =
{
    { "BYTES_PER_ELEMENT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUint32ArrayBYTES_PER_ELEMENT), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSUint32ArrayConstructorTable = { 2, 1, JSUint32ArrayConstructorTableValues, 0 };
const ClassInfo JSUint32ArrayConstructor::s_info = { "Uint32ArrayConstructor", &DOMConstructorObject::s_info, &JSUint32ArrayConstructorTable, 0 };

JSUint32ArrayConstructor::JSUint32ArrayConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSUint32ArrayPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSUint32ArrayConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSUint32ArrayConstructor, JSDOMWrapper>(exec, &JSUint32ArrayConstructorTable, this, propertyName, slot);
}

bool JSUint32ArrayConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSUint32ArrayConstructor, JSDOMWrapper>(exec, &JSUint32ArrayConstructorTable, this, propertyName, descriptor);
}

ConstructType JSUint32ArrayConstructor::getConstructData(ConstructData& constructData)
{
    constructData.native.function = constructJSUint32Array;
    return ConstructTypeHost;
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSUint32ArrayPrototypeTableValues[4] =
{
    { "BYTES_PER_ELEMENT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUint32ArrayBYTES_PER_ELEMENT), (intptr_t)0 THUNK_GENERATOR(0) },
    { "subarray", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsUint32ArrayPrototypeFunctionSubarray), (intptr_t)2 THUNK_GENERATOR(0) },
    { "set", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsUint32ArrayPrototypeFunctionSet), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSUint32ArrayPrototypeTable = { 8, 7, JSUint32ArrayPrototypeTableValues, 0 };
static const HashTable* getJSUint32ArrayPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSUint32ArrayPrototypeTable);
}

const ClassInfo JSUint32ArrayPrototype::s_info = { "Uint32ArrayPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSUint32ArrayPrototypeTable };

JSObject* JSUint32ArrayPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSUint32Array>(exec, globalObject);
}

bool JSUint32ArrayPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSUint32ArrayPrototype, JSObject>(exec, getJSUint32ArrayPrototypeTable(exec), this, propertyName, slot);
}

bool JSUint32ArrayPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSUint32ArrayPrototype, JSObject>(exec, getJSUint32ArrayPrototypeTable(exec), this, propertyName, descriptor);
}

static const HashTable* getJSUint32ArrayTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSUint32ArrayTable);
}

const ClassInfo JSUint32Array::s_info = { "Uint32Array", &JSArrayBufferView::s_info, 0, getJSUint32ArrayTable };

JSUint32Array::JSUint32Array(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Uint32Array> impl)
    : JSArrayBufferView(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSUint32Array::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSUint32ArrayPrototype(exec->globalData(), globalObject, JSUint32ArrayPrototype::createStructure(exec->globalData(), JSArrayBufferViewPrototype::self(exec, globalObject)));
}

bool JSUint32Array::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<Uint32Array*>(impl())->length()) {
        slot.setValue(getByIndex(exec, index));
        return true;
    }
    return getStaticValueSlot<JSUint32Array, Base>(exec, getJSUint32ArrayTable(exec), this, propertyName, slot);
}

bool JSUint32Array::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<Uint32Array*>(impl())->length()) {
        descriptor.setDescriptor(getByIndex(exec, index), DontDelete);
        return true;
    }
    return getStaticValueDescriptor<JSUint32Array, Base>(exec, getJSUint32ArrayTable(exec), this, propertyName, descriptor);
}

bool JSUint32Array::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    if (propertyName < static_cast<Uint32Array*>(impl())->length()) {
        slot.setValue(getByIndex(exec, propertyName));
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsUint32ArrayLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSUint32Array* castedThis = static_cast<JSUint32Array*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Uint32Array* imp = static_cast<Uint32Array*>(castedThis->impl());
    JSValue result = jsNumber(imp->length());
    return result;
}


JSValue jsUint32ArrayConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSUint32Array* domObject = static_cast<JSUint32Array*>(asObject(slotBase));
    return JSUint32Array::getConstructor(exec, domObject->globalObject());
}

void JSUint32Array::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok) {
        indexSetter(exec, index, value);
        return;
    }
    Base::put(exec, propertyName, value, slot);
}

void JSUint32Array::put(ExecState* exec, unsigned propertyName, JSValue value)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    indexSetter(exec, propertyName, value);
    return;
}

void JSUint32Array::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    for (unsigned i = 0; i < static_cast<Uint32Array*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSUint32Array::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSUint32ArrayConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsUint32ArrayPrototypeFunctionSubarray(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSUint32Array::s_info))
        return throwVMTypeError(exec);
    JSUint32Array* castedThis = static_cast<JSUint32Array*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSUint32Array::s_info);
    Uint32Array* imp = static_cast<Uint32Array*>(castedThis->impl());
    int start(exec->argument(0).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    int argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->subarray(start)));
        return JSValue::encode(result);
    }

    int end(exec->argument(1).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->subarray(start, end)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsUint32ArrayPrototypeFunctionSet(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSUint32Array::s_info))
        return throwVMTypeError(exec);
    JSUint32Array* castedThis = static_cast<JSUint32Array*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSUint32Array::s_info);
    return JSValue::encode(castedThis->set(exec));
}

// Constant getters

JSValue jsUint32ArrayBYTES_PER_ELEMENT(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}


JSValue JSUint32Array::getByIndex(ExecState*, unsigned index)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    double result = static_cast<Uint32Array*>(impl())->item(index);
    if (isnan(result))
        return jsNaN();
    return JSValue(result);
}

Uint32Array* toUint32Array(JSC::JSValue value)
{
    return value.inherits(&JSUint32Array::s_info) ? static_cast<JSUint32Array*>(asObject(value))->impl() : 0;
}

}
