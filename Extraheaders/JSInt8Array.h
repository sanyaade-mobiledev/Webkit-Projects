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

#ifndef JSInt8Array_h
#define JSInt8Array_h

#include "JSArrayBufferView.h"
#include "JSDOMBinding.h"
#include <runtime/JSObject.h>
#include <wtf/Int8Array.h>

namespace WebCore {

class JSInt8Array : public JSArrayBufferView {
public:
    typedef JSArrayBufferView Base;
    static JSInt8Array* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Int8Array> impl)
    {
        JSInt8Array* ptr = new (NotNull, JSC::allocateCell<JSInt8Array>(globalObject->globalData().heap)) JSInt8Array(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static bool getOwnPropertySlotByIndex(JSC::JSCell*, JSC::ExecState*, unsigned propertyName, JSC::PropertySlot&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static void putByIndex(JSC::JSCell*, JSC::ExecState*, unsigned propertyName, JSC::JSValue, bool shouldThrow);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static void getOwnPropertyNames(JSC::JSObject*, JSC::ExecState*, JSC::PropertyNameArray&, JSC::EnumerationMode mode = JSC::ExcludeDontEnumProperties);
    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom functions
    JSC::JSValue set(JSC::ExecState*);
    Int8Array* impl() const
    {
        return static_cast<Int8Array*>(Base::impl());
    }
    static const JSC::TypedArrayType TypedArrayStorageType = JSC::TypedArrayInt8;
    intptr_t m_storageLength;
    void* m_storage;
protected:
    JSInt8Array(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<Int8Array>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetPropertyNames | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
    JSC::JSValue getByIndex(JSC::ExecState*, unsigned index);
    void indexSetter(JSC::ExecState*, unsigned index, JSC::JSValue);
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, Int8Array*);
Int8Array* toInt8Array(JSC::JSValue);

class JSInt8ArrayPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSInt8ArrayPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSInt8ArrayPrototype* ptr = new (NotNull, JSC::allocateCell<JSInt8ArrayPrototype>(globalData.heap)) JSInt8ArrayPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSInt8ArrayPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSInt8ArrayConstructor : public DOMConstructorObject {
private:
    JSInt8ArrayConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSInt8ArrayConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSInt8ArrayConstructor* ptr = new (NotNull, JSC::allocateCell<JSInt8ArrayConstructor>(*exec->heap())) JSInt8ArrayConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSInt8Array(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsInt8ArrayPrototypeFunctionSubarray(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInt8ArrayPrototypeFunctionSet(JSC::ExecState*);
// Attributes

JSC::JSValue jsInt8ArrayLength(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsInt8ArrayConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsInt8ArrayBYTES_PER_ELEMENT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif