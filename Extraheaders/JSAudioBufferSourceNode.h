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

#ifndef JSAudioBufferSourceNode_h
#define JSAudioBufferSourceNode_h

#if ENABLE(WEB_AUDIO)

#include "AudioBufferSourceNode.h"
#include "JSAudioSourceNode.h"
#include "JSDOMBinding.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSAudioBufferSourceNode : public JSAudioSourceNode {
public:
    typedef JSAudioSourceNode Base;
    static JSAudioBufferSourceNode* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<AudioBufferSourceNode> impl)
    {
        JSAudioBufferSourceNode* ptr = new (NotNull, JSC::allocateCell<JSAudioBufferSourceNode>(globalObject->globalData().heap)) JSAudioBufferSourceNode(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom attributes
    void setBuffer(JSC::ExecState*, JSC::JSValue);
protected:
    JSAudioBufferSourceNode(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<AudioBufferSourceNode>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, AudioBufferSourceNode*);

class JSAudioBufferSourceNodePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSAudioBufferSourceNodePrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSAudioBufferSourceNodePrototype* ptr = new (NotNull, JSC::allocateCell<JSAudioBufferSourceNodePrototype>(globalData.heap)) JSAudioBufferSourceNodePrototype(globalData, globalObject, structure);
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
    JSAudioBufferSourceNodePrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSAudioBufferSourceNodeConstructor : public DOMConstructorObject {
private:
    JSAudioBufferSourceNodeConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSAudioBufferSourceNodeConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSAudioBufferSourceNodeConstructor* ptr = new (NotNull, JSC::allocateCell<JSAudioBufferSourceNodeConstructor>(*exec->heap())) JSAudioBufferSourceNodeConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsAudioBufferSourceNodePrototypeFunctionNoteOn(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioBufferSourceNodePrototypeFunctionNoteGrainOn(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioBufferSourceNodePrototypeFunctionNoteOff(JSC::ExecState*);
// Attributes

JSC::JSValue jsAudioBufferSourceNodeBuffer(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAudioBufferSourceNodeBuffer(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioBufferSourceNodePlaybackState(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioBufferSourceNodeGain(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioBufferSourceNodePlaybackRate(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioBufferSourceNodeLoop(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAudioBufferSourceNodeLoop(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioBufferSourceNodeLooping(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAudioBufferSourceNodeLooping(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioBufferSourceNodeConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsAudioBufferSourceNodeUNSCHEDULED_STATE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioBufferSourceNodeSCHEDULED_STATE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioBufferSourceNodePLAYING_STATE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioBufferSourceNodeFINISHED_STATE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(WEB_AUDIO)

#endif
