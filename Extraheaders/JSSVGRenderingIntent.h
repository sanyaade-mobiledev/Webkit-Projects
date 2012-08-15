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

#ifndef JSSVGRenderingIntent_h
#define JSSVGRenderingIntent_h

#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include "SVGElement.h"
#include "SVGRenderingIntent.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSSVGRenderingIntent : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSSVGRenderingIntent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGRenderingIntent> impl)
    {
        JSSVGRenderingIntent* ptr = new (NotNull, JSC::allocateCell<JSSVGRenderingIntent>(globalObject->globalData().heap)) JSSVGRenderingIntent(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSSVGRenderingIntent();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    SVGRenderingIntent* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    SVGRenderingIntent* m_impl;
protected:
    JSSVGRenderingIntent(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGRenderingIntent>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSSVGRenderingIntentOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, SVGRenderingIntent*)
{
    DEFINE_STATIC_LOCAL(JSSVGRenderingIntentOwner, jsSVGRenderingIntentOwner, ());
    return &jsSVGRenderingIntentOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, SVGRenderingIntent*)
{
    return world;
}

SVGRenderingIntent* toSVGRenderingIntent(JSC::JSValue);

class JSSVGRenderingIntentPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSVGRenderingIntentPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGRenderingIntentPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGRenderingIntentPrototype>(globalData.heap)) JSSVGRenderingIntentPrototype(globalData, globalObject, structure);
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
    JSSVGRenderingIntentPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSSVGRenderingIntentConstructor : public DOMConstructorObject {
private:
    JSSVGRenderingIntentConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGRenderingIntentConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGRenderingIntentConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGRenderingIntentConstructor>(*exec->heap())) JSSVGRenderingIntentConstructor(structure, globalObject);
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

// Attributes

JSC::JSValue jsSVGRenderingIntentConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsSVGRenderingIntentRENDERING_INTENT_UNKNOWN(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGRenderingIntentRENDERING_INTENT_AUTO(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGRenderingIntentRENDERING_INTENT_PERCEPTUAL(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGRenderingIntentRENDERING_INTENT_RELATIVE_COLORIMETRIC(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGRenderingIntentRENDERING_INTENT_SATURATION(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGRenderingIntentRENDERING_INTENT_ABSOLUTE_COLORIMETRIC(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
