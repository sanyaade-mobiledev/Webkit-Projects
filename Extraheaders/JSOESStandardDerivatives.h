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

#ifndef JSOESStandardDerivatives_h
#define JSOESStandardDerivatives_h

#if ENABLE(WEBGL)

#include "JSDOMBinding.h"
#include "OESStandardDerivatives.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSOESStandardDerivatives : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSOESStandardDerivatives* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<OESStandardDerivatives> impl)
    {
        JSOESStandardDerivatives* ptr = new (NotNull, JSC::allocateCell<JSOESStandardDerivatives>(globalObject->globalData().heap)) JSOESStandardDerivatives(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static void destroy(JSC::JSCell*);
    ~JSOESStandardDerivatives();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    OESStandardDerivatives* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    OESStandardDerivatives* m_impl;
protected:
    JSOESStandardDerivatives(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<OESStandardDerivatives>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSOESStandardDerivativesOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, OESStandardDerivatives*)
{
    DEFINE_STATIC_LOCAL(JSOESStandardDerivativesOwner, jsOESStandardDerivativesOwner, ());
    return &jsOESStandardDerivativesOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, OESStandardDerivatives*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, OESStandardDerivatives*);
OESStandardDerivatives* toOESStandardDerivatives(JSC::JSValue);

class JSOESStandardDerivativesPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSOESStandardDerivativesPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSOESStandardDerivativesPrototype* ptr = new (NotNull, JSC::allocateCell<JSOESStandardDerivativesPrototype>(globalData.heap)) JSOESStandardDerivativesPrototype(globalData, globalObject, structure);
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
    JSOESStandardDerivativesPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Constants

JSC::JSValue jsOESStandardDerivativesFRAGMENT_SHADER_DERIVATIVE_HINT_OES(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(WEBGL)

#endif
