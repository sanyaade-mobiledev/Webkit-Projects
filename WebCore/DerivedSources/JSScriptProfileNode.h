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

#ifndef JSScriptProfileNode_h
#define JSScriptProfileNode_h

#if ENABLE(JAVASCRIPT_DEBUGGER)

#include "JSDOMBinding.h"
#include <profiler/ProfileNode.h>
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObjectWithGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

typedef JSC::ProfileNode ScriptProfileNode;

class JSScriptProfileNode : public JSDOMWrapper {
    typedef JSDOMWrapper Base;
public:
    JSScriptProfileNode(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<ScriptProfileNode>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }


    // Custom attributes
    JSC::JSValue children(JSC::ExecState*) const;
    JSC::JSValue callUID(JSC::ExecState*) const;
    ScriptProfileNode* impl() const { return m_impl.get(); }

private:
    RefPtr<ScriptProfileNode> m_impl;
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, ScriptProfileNode*);
ScriptProfileNode* toScriptProfileNode(JSC::JSValue);

class JSScriptProfileNodePrototype : public JSC::JSObjectWithGlobalObject {
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
    JSScriptProfileNodePrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure) : JSC::JSObjectWithGlobalObject(globalData, globalObject, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsScriptProfileNodeFunctionName(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsScriptProfileNodeUrl(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsScriptProfileNodeLineNumber(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsScriptProfileNodeTotalTime(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsScriptProfileNodeSelfTime(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsScriptProfileNodeNumberOfCalls(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsScriptProfileNodeChildren(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsScriptProfileNodeVisible(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsScriptProfileNodeCallUID(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(JAVASCRIPT_DEBUGGER)

#endif