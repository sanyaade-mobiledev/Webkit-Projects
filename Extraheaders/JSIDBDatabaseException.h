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

#ifndef JSIDBDatabaseException_h
#define JSIDBDatabaseException_h

#if ENABLE(INDEXED_DATABASE)

#include "IDBDatabaseException.h"
#include "JSDOMBinding.h"
#include <runtime/ErrorPrototype.h>
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>

namespace WebCore {

class JSIDBDatabaseException : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSIDBDatabaseException* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<IDBDatabaseException> impl)
    {
        JSIDBDatabaseException* ptr = new (NotNull, JSC::allocateCell<JSIDBDatabaseException>(globalObject->globalData().heap)) JSIDBDatabaseException(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSIDBDatabaseException();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    IDBDatabaseException* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    IDBDatabaseException* m_impl;
protected:
    JSIDBDatabaseException(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<IDBDatabaseException>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSIDBDatabaseExceptionOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, IDBDatabaseException*)
{
    DEFINE_STATIC_LOCAL(JSIDBDatabaseExceptionOwner, jsIDBDatabaseExceptionOwner, ());
    return &jsIDBDatabaseExceptionOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, IDBDatabaseException*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, IDBDatabaseException*);
IDBDatabaseException* toIDBDatabaseException(JSC::JSValue);

class JSIDBDatabaseExceptionPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSIDBDatabaseExceptionPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSIDBDatabaseExceptionPrototype* ptr = new (NotNull, JSC::allocateCell<JSIDBDatabaseExceptionPrototype>(globalData.heap)) JSIDBDatabaseExceptionPrototype(globalData, globalObject, structure);
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
    JSIDBDatabaseExceptionPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSIDBDatabaseExceptionConstructor : public DOMConstructorObject {
private:
    JSIDBDatabaseExceptionConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSIDBDatabaseExceptionConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSIDBDatabaseExceptionConstructor* ptr = new (NotNull, JSC::allocateCell<JSIDBDatabaseExceptionConstructor>(*exec->heap())) JSIDBDatabaseExceptionConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsIDBDatabaseExceptionPrototypeFunctionToString(JSC::ExecState*);
// Attributes

JSC::JSValue jsIDBDatabaseExceptionCode(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseExceptionName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseExceptionMessage(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseExceptionConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsIDBDatabaseExceptionNO_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseExceptionUNKNOWN_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseExceptionNON_TRANSIENT_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseExceptionCONSTRAINT_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseExceptionDATA_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseExceptionNOT_ALLOWED_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseExceptionTRANSACTION_INACTIVE_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseExceptionREAD_ONLY_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseExceptionVER_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseExceptionNOT_FOUND_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseExceptionABORT_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseExceptionTIMEOUT_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseExceptionQUOTA_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(INDEXED_DATABASE)

#endif
