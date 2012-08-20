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

#ifndef JSGeolocation_h
#define JSGeolocation_h

#if ENABLE(GEOLOCATION)

#include "Geolocation.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSGeolocation : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSGeolocation* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Geolocation> impl)
    {
        JSGeolocation* ptr = new (NotNull, JSC::allocateCell<JSGeolocation>(globalObject->globalData().heap)) JSGeolocation(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static void destroy(JSC::JSCell*);
    ~JSGeolocation();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }


    // Custom functions
    JSC::JSValue getCurrentPosition(JSC::ExecState*);
    JSC::JSValue watchPosition(JSC::ExecState*);
    Geolocation* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    Geolocation* m_impl;
protected:
    JSGeolocation(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<Geolocation>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSGeolocationOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, Geolocation*)
{
    DEFINE_STATIC_LOCAL(JSGeolocationOwner, jsGeolocationOwner, ());
    return &jsGeolocationOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, Geolocation*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, Geolocation*);
Geolocation* toGeolocation(JSC::JSValue);

class JSGeolocationPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSGeolocationPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSGeolocationPrototype* ptr = new (NotNull, JSC::allocateCell<JSGeolocationPrototype>(globalData.heap)) JSGeolocationPrototype(globalData, globalObject, structure);
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
    JSGeolocationPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsGeolocationPrototypeFunctionGetCurrentPosition(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsGeolocationPrototypeFunctionWatchPosition(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsGeolocationPrototypeFunctionClearWatch(JSC::ExecState*);

} // namespace WebCore

#endif // ENABLE(GEOLOCATION)

#endif
