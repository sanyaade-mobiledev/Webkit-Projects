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

#ifndef JSNavigator_h
#define JSNavigator_h

#include "JSDOMBinding.h"
#include "Navigator.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSNavigator : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSNavigator* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Navigator> impl)
    {
        JSNavigator* ptr = new (NotNull, JSC::allocateCell<JSNavigator>(globalObject->globalData().heap)) JSNavigator(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSNavigator();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    Navigator* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    Navigator* m_impl;
protected:
    JSNavigator(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<Navigator>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSNavigatorOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, Navigator*)
{
    DEFINE_STATIC_LOCAL(JSNavigatorOwner, jsNavigatorOwner, ());
    return &jsNavigatorOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, Navigator*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, Navigator*);
Navigator* toNavigator(JSC::JSValue);

class JSNavigatorPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSNavigatorPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSNavigatorPrototype* ptr = new (NotNull, JSC::allocateCell<JSNavigatorPrototype>(globalData.heap)) JSNavigatorPrototype(globalData, globalObject, structure);
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
    JSNavigatorPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsNavigatorPrototypeFunctionJavaEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsNavigatorPrototypeFunctionGetStorageUpdates(JSC::ExecState*);
// Attributes

JSC::JSValue jsNavigatorAppCodeName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNavigatorAppName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNavigatorAppVersion(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNavigatorLanguage(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNavigatorUserAgent(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNavigatorPlatform(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNavigatorPlugins(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNavigatorMimeTypes(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNavigatorProduct(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNavigatorProductSub(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNavigatorVendor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNavigatorVendorSub(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNavigatorCookieEnabled(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNavigatorOnLine(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#if ENABLE(GEOLOCATION)
JSC::JSValue jsNavigatorGeolocation(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif

} // namespace WebCore

#endif
