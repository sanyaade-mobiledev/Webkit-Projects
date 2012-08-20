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

#ifndef JSSQLResultSetRowList_h
#define JSSQLResultSetRowList_h

#if ENABLE(SQL_DATABASE)

#include "JSDOMBinding.h"
#include "SQLResultSetRowList.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSSQLResultSetRowList : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSSQLResultSetRowList* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SQLResultSetRowList> impl)
    {
        JSSQLResultSetRowList* ptr = new (NotNull, JSC::allocateCell<JSSQLResultSetRowList>(globalObject->globalData().heap)) JSSQLResultSetRowList(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSSQLResultSetRowList();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }


    // Custom functions
    JSC::JSValue item(JSC::ExecState*);
    SQLResultSetRowList* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    SQLResultSetRowList* m_impl;
protected:
    JSSQLResultSetRowList(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SQLResultSetRowList>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSSQLResultSetRowListOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, SQLResultSetRowList*)
{
    DEFINE_STATIC_LOCAL(JSSQLResultSetRowListOwner, jsSQLResultSetRowListOwner, ());
    return &jsSQLResultSetRowListOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, SQLResultSetRowList*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, SQLResultSetRowList*);
SQLResultSetRowList* toSQLResultSetRowList(JSC::JSValue);

class JSSQLResultSetRowListPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSQLResultSetRowListPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSQLResultSetRowListPrototype* ptr = new (NotNull, JSC::allocateCell<JSSQLResultSetRowListPrototype>(globalData.heap)) JSSQLResultSetRowListPrototype(globalData, globalObject, structure);
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
    JSSQLResultSetRowListPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsSQLResultSetRowListPrototypeFunctionItem(JSC::ExecState*);
// Attributes

JSC::JSValue jsSQLResultSetRowListLength(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(SQL_DATABASE)

#endif
