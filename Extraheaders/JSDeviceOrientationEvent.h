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

#ifndef JSDeviceOrientationEvent_h
#define JSDeviceOrientationEvent_h

#if ENABLE(DEVICE_ORIENTATION)

#include "DeviceOrientationEvent.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSDeviceOrientationEvent : public JSEvent {
public:
    typedef JSEvent Base;
    static JSDeviceOrientationEvent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DeviceOrientationEvent> impl)
    {
        JSDeviceOrientationEvent* ptr = new (NotNull, JSC::allocateCell<JSDeviceOrientationEvent>(globalObject->globalData().heap)) JSDeviceOrientationEvent(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom attributes
    JSC::JSValue alpha(JSC::ExecState*) const;
    JSC::JSValue beta(JSC::ExecState*) const;
    JSC::JSValue gamma(JSC::ExecState*) const;
    JSC::JSValue absolute(JSC::ExecState*) const;

    // Custom functions
    JSC::JSValue initDeviceOrientationEvent(JSC::ExecState*);
protected:
    JSDeviceOrientationEvent(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<DeviceOrientationEvent>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSDeviceOrientationEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSDeviceOrientationEventPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDeviceOrientationEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSDeviceOrientationEventPrototype>(globalData.heap)) JSDeviceOrientationEventPrototype(globalData, globalObject, structure);
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
    JSDeviceOrientationEventPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSDeviceOrientationEventConstructor : public DOMConstructorObject {
private:
    JSDeviceOrientationEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSDeviceOrientationEventConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSDeviceOrientationEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSDeviceOrientationEventConstructor>(*exec->heap())) JSDeviceOrientationEventConstructor(structure, globalObject);
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
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsDeviceOrientationEventPrototypeFunctionInitDeviceOrientationEvent(JSC::ExecState*);
// Attributes

JSC::JSValue jsDeviceOrientationEventAlpha(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsDeviceOrientationEventBeta(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsDeviceOrientationEventGamma(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsDeviceOrientationEventAbsolute(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsDeviceOrientationEventConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(DEVICE_ORIENTATION)

#endif
