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

#ifndef JSWebGLVertexArrayObjectOES_h
#define JSWebGLVertexArrayObjectOES_h

#if ENABLE(WEBGL)

#include "JSDOMBinding.h"
#include "WebGLVertexArrayObjectOES.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSWebGLVertexArrayObjectOES : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSWebGLVertexArrayObjectOES* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLVertexArrayObjectOES> impl)
    {
        JSWebGLVertexArrayObjectOES* ptr = new (NotNull, JSC::allocateCell<JSWebGLVertexArrayObjectOES>(globalObject->globalData().heap)) JSWebGLVertexArrayObjectOES(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSWebGLVertexArrayObjectOES();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    WebGLVertexArrayObjectOES* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    WebGLVertexArrayObjectOES* m_impl;
protected:
    JSWebGLVertexArrayObjectOES(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<WebGLVertexArrayObjectOES>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSWebGLVertexArrayObjectOESOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, WebGLVertexArrayObjectOES*)
{
    DEFINE_STATIC_LOCAL(JSWebGLVertexArrayObjectOESOwner, jsWebGLVertexArrayObjectOESOwner, ());
    return &jsWebGLVertexArrayObjectOESOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, WebGLVertexArrayObjectOES*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, WebGLVertexArrayObjectOES*);
WebGLVertexArrayObjectOES* toWebGLVertexArrayObjectOES(JSC::JSValue);

class JSWebGLVertexArrayObjectOESPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSWebGLVertexArrayObjectOESPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebGLVertexArrayObjectOESPrototype* ptr = new (NotNull, JSC::allocateCell<JSWebGLVertexArrayObjectOESPrototype>(globalData.heap)) JSWebGLVertexArrayObjectOESPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSWebGLVertexArrayObjectOESPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSWebGLVertexArrayObjectOESConstructor : public DOMConstructorObject {
private:
    JSWebGLVertexArrayObjectOESConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebGLVertexArrayObjectOESConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebGLVertexArrayObjectOESConstructor* ptr = new (NotNull, JSC::allocateCell<JSWebGLVertexArrayObjectOESConstructor>(*exec->heap())) JSWebGLVertexArrayObjectOESConstructor(structure, globalObject);
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

JSC::JSValue jsWebGLVertexArrayObjectOESConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(WEBGL)

#endif
