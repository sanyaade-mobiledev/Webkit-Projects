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
#include "JSCloseEvent.h"

#include "CloseEvent.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCloseEvent);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCloseEventTableValues[3] =
{
    { "wasClean", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCloseEventWasClean), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCloseEventConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCloseEventTable = { 5, 3, JSCloseEventTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCloseEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCloseEventConstructorTable = { 1, 0, JSCloseEventConstructorTableValues, 0 };
class JSCloseEventConstructor : public DOMConstructorObject {
public:
    JSCloseEventConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSCloseEventConstructor::s_info = { "CloseEventConstructor", &DOMConstructorObject::s_info, &JSCloseEventConstructorTable, 0 };

JSCloseEventConstructor::JSCloseEventConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSCloseEventPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSCloseEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCloseEventConstructor, JSDOMWrapper>(exec, &JSCloseEventConstructorTable, this, propertyName, slot);
}

bool JSCloseEventConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCloseEventConstructor, JSDOMWrapper>(exec, &JSCloseEventConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCloseEventPrototypeTableValues[2] =
{
    { "initCloseEvent", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsCloseEventPrototypeFunctionInitCloseEvent), (intptr_t)4 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCloseEventPrototypeTable = { 2, 1, JSCloseEventPrototypeTableValues, 0 };
const ClassInfo JSCloseEventPrototype::s_info = { "CloseEventPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSCloseEventPrototypeTable, 0 };

JSObject* JSCloseEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCloseEvent>(exec, globalObject);
}

bool JSCloseEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSCloseEventPrototypeTable, this, propertyName, slot);
}

bool JSCloseEventPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSCloseEventPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSCloseEvent::s_info = { "CloseEvent", &JSEvent::s_info, &JSCloseEventTable, 0 };

JSCloseEvent::JSCloseEvent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CloseEvent> impl)
    : JSEvent(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSCloseEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSCloseEventPrototype(exec->globalData(), globalObject, JSCloseEventPrototype::createStructure(exec->globalData(), JSEventPrototype::self(exec, globalObject)));
}

bool JSCloseEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSCloseEvent, Base>(exec, &JSCloseEventTable, this, propertyName, slot);
}

bool JSCloseEvent::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSCloseEvent, Base>(exec, &JSCloseEventTable, this, propertyName, descriptor);
}

JSValue jsCloseEventWasClean(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCloseEvent* castedThis = static_cast<JSCloseEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CloseEvent* imp = static_cast<CloseEvent*>(castedThis->impl());
    JSValue result = jsBoolean(imp->wasClean());
    return result;
}


JSValue jsCloseEventConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCloseEvent* domObject = static_cast<JSCloseEvent*>(asObject(slotBase));
    return JSCloseEvent::getConstructor(exec, domObject->globalObject());
}

JSValue JSCloseEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCloseEventConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsCloseEventPrototypeFunctionInitCloseEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCloseEvent::s_info))
        return throwVMTypeError(exec);
    JSCloseEvent* castedThis = static_cast<JSCloseEvent*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSCloseEvent::s_info);
    CloseEvent* imp = static_cast<CloseEvent*>(castedThis->impl());
    const String& typeArg(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool canBubbleArg(exec->argument(1).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool cancelableArg(exec->argument(2).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool wasCleanArg(exec->argument(3).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->initCloseEvent(typeArg, canBubbleArg, cancelableArg, wasCleanArg);
    return JSValue::encode(jsUndefined());
}


}
