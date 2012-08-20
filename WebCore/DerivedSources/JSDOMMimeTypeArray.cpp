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
#include "JSDOMMimeTypeArray.h"

#include "DOMMimeType.h"
#include "DOMMimeTypeArray.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDOMMimeType.h"
#include "wtf/text/AtomicString.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSDOMMimeTypeArray);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDOMMimeTypeArrayTableValues[3] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMMimeTypeArrayLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMMimeTypeArrayConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDOMMimeTypeArrayTable = { 5, 3, JSDOMMimeTypeArrayTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDOMMimeTypeArrayConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDOMMimeTypeArrayConstructorTable = { 1, 0, JSDOMMimeTypeArrayConstructorTableValues, 0 };
class JSDOMMimeTypeArrayConstructor : public DOMConstructorObject {
public:
    JSDOMMimeTypeArrayConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSDOMMimeTypeArrayConstructor::s_info = { "MimeTypeArrayConstructor", &DOMConstructorObject::s_info, &JSDOMMimeTypeArrayConstructorTable, 0 };

JSDOMMimeTypeArrayConstructor::JSDOMMimeTypeArrayConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSDOMMimeTypeArrayPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSDOMMimeTypeArrayConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMMimeTypeArrayConstructor, JSDOMWrapper>(exec, &JSDOMMimeTypeArrayConstructorTable, this, propertyName, slot);
}

bool JSDOMMimeTypeArrayConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDOMMimeTypeArrayConstructor, JSDOMWrapper>(exec, &JSDOMMimeTypeArrayConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDOMMimeTypeArrayPrototypeTableValues[3] =
{
    { "item", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDOMMimeTypeArrayPrototypeFunctionItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { "namedItem", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDOMMimeTypeArrayPrototypeFunctionNamedItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDOMMimeTypeArrayPrototypeTable = { 5, 3, JSDOMMimeTypeArrayPrototypeTableValues, 0 };
const ClassInfo JSDOMMimeTypeArrayPrototype::s_info = { "MimeTypeArrayPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSDOMMimeTypeArrayPrototypeTable, 0 };

JSObject* JSDOMMimeTypeArrayPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDOMMimeTypeArray>(exec, globalObject);
}

bool JSDOMMimeTypeArrayPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSDOMMimeTypeArrayPrototypeTable, this, propertyName, slot);
}

bool JSDOMMimeTypeArrayPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSDOMMimeTypeArrayPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSDOMMimeTypeArray::s_info = { "MimeTypeArray", &JSDOMWrapper::s_info, &JSDOMMimeTypeArrayTable, 0 };

JSDOMMimeTypeArray::JSDOMMimeTypeArray(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DOMMimeTypeArray> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSDOMMimeTypeArray::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSDOMMimeTypeArrayPrototype(exec->globalData(), globalObject, JSDOMMimeTypeArrayPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSDOMMimeTypeArray::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    const HashEntry* entry = JSDOMMimeTypeArrayTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(this, entry->propertyGetter());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<DOMMimeTypeArray*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<DOMMimeTypeArray*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    return getStaticValueSlot<JSDOMMimeTypeArray, Base>(exec, &JSDOMMimeTypeArrayTable, this, propertyName, slot);
}

bool JSDOMMimeTypeArray::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    const HashEntry* entry = JSDOMMimeTypeArrayTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(this, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<DOMMimeTypeArray*>(impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(this, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<DOMMimeTypeArray*>(impl()), propertyName)) {
        PropertySlot slot;
        slot.setCustom(this, nameGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), ReadOnly | DontDelete | DontEnum);
        return true;
    }
    return getStaticValueDescriptor<JSDOMMimeTypeArray, Base>(exec, &JSDOMMimeTypeArrayTable, this, propertyName, descriptor);
}

bool JSDOMMimeTypeArray::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    if (propertyName < static_cast<DOMMimeTypeArray*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsDOMMimeTypeArrayLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDOMMimeTypeArray* castedThis = static_cast<JSDOMMimeTypeArray*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMMimeTypeArray* imp = static_cast<DOMMimeTypeArray*>(castedThis->impl());
    JSValue result = jsNumber(imp->length());
    return result;
}


JSValue jsDOMMimeTypeArrayConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDOMMimeTypeArray* domObject = static_cast<JSDOMMimeTypeArray*>(asObject(slotBase));
    return JSDOMMimeTypeArray::getConstructor(exec, domObject->globalObject());
}

void JSDOMMimeTypeArray::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    for (unsigned i = 0; i < static_cast<DOMMimeTypeArray*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSDOMMimeTypeArray::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDOMMimeTypeArrayConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDOMMimeTypeArrayPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMMimeTypeArray::s_info))
        return throwVMTypeError(exec);
    JSDOMMimeTypeArray* castedThis = static_cast<JSDOMMimeTypeArray*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMMimeTypeArray::s_info);
    DOMMimeTypeArray* imp = static_cast<DOMMimeTypeArray*>(castedThis->impl());
    unsigned index(exec->argument(0).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->item(index)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDOMMimeTypeArrayPrototypeFunctionNamedItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMMimeTypeArray::s_info))
        return throwVMTypeError(exec);
    JSDOMMimeTypeArray* castedThis = static_cast<JSDOMMimeTypeArray*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMMimeTypeArray::s_info);
    DOMMimeTypeArray* imp = static_cast<DOMMimeTypeArray*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->namedItem(name)));
    return JSValue::encode(result);
}


JSValue JSDOMMimeTypeArray::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSDOMMimeTypeArray* thisObj = static_cast<JSDOMMimeTypeArray*>(asObject(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, &s_info);
    return toJS(exec, thisObj->globalObject(), static_cast<DOMMimeTypeArray*>(thisObj->impl())->item(index));
}

static inline bool isObservable(JSDOMMimeTypeArray* jsDOMMimeTypeArray)
{
    if (jsDOMMimeTypeArray->hasCustomProperties())
        return true;
    return false;
}

bool JSDOMMimeTypeArrayOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSDOMMimeTypeArray* jsDOMMimeTypeArray = static_cast<JSDOMMimeTypeArray*>(handle.get().asCell());
    if (!isObservable(jsDOMMimeTypeArray))
        return false;
    Frame* root = jsDOMMimeTypeArray->impl()->frame();
    if (!root)
        return false;
    return visitor.containsOpaqueRoot(root);
}

void JSDOMMimeTypeArrayOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSDOMMimeTypeArray* jsDOMMimeTypeArray = static_cast<JSDOMMimeTypeArray*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsDOMMimeTypeArray->impl(), jsDOMMimeTypeArray);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DOMMimeTypeArray* impl)
{
    return wrap<JSDOMMimeTypeArray>(exec, globalObject, impl);
}

DOMMimeTypeArray* toDOMMimeTypeArray(JSC::JSValue value)
{
    return value.inherits(&JSDOMMimeTypeArray::s_info) ? static_cast<JSDOMMimeTypeArray*>(asObject(value))->impl() : 0;
}

}
