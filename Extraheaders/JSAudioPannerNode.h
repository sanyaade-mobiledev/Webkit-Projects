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

#ifndef JSAudioPannerNode_h
#define JSAudioPannerNode_h

#if ENABLE(WEB_AUDIO)

#include "AudioPannerNode.h"
#include "JSAudioNode.h"
#include "JSDOMBinding.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSAudioPannerNode : public JSAudioNode {
public:
    typedef JSAudioNode Base;
    static JSAudioPannerNode* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<AudioPannerNode> impl)
    {
        JSAudioPannerNode* ptr = new (NotNull, JSC::allocateCell<JSAudioPannerNode>(globalObject->globalData().heap)) JSAudioPannerNode(structure, globalObject, impl);
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
protected:
    JSAudioPannerNode(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<AudioPannerNode>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, AudioPannerNode*);

class JSAudioPannerNodePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSAudioPannerNodePrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSAudioPannerNodePrototype* ptr = new (NotNull, JSC::allocateCell<JSAudioPannerNodePrototype>(globalData.heap)) JSAudioPannerNodePrototype(globalData, globalObject, structure);
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
    JSAudioPannerNodePrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSAudioPannerNodeConstructor : public DOMConstructorObject {
private:
    JSAudioPannerNodeConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSAudioPannerNodeConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSAudioPannerNodeConstructor* ptr = new (NotNull, JSC::allocateCell<JSAudioPannerNodeConstructor>(*exec->heap())) JSAudioPannerNodeConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsAudioPannerNodePrototypeFunctionSetPosition(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioPannerNodePrototypeFunctionSetOrientation(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioPannerNodePrototypeFunctionSetVelocity(JSC::ExecState*);
// Attributes

JSC::JSValue jsAudioPannerNodePanningModel(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAudioPannerNodePanningModel(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioPannerNodeDistanceModel(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAudioPannerNodeDistanceModel(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioPannerNodeRefDistance(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAudioPannerNodeRefDistance(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioPannerNodeMaxDistance(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAudioPannerNodeMaxDistance(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioPannerNodeRolloffFactor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAudioPannerNodeRolloffFactor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioPannerNodeConeInnerAngle(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAudioPannerNodeConeInnerAngle(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioPannerNodeConeOuterAngle(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAudioPannerNodeConeOuterAngle(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioPannerNodeConeOuterGain(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAudioPannerNodeConeOuterGain(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioPannerNodeConeGain(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioPannerNodeDistanceGain(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioPannerNodeConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsAudioPannerNodeEQUALPOWER(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioPannerNodeHRTF(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioPannerNodeSOUNDFIELD(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioPannerNodeLINEAR_DISTANCE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioPannerNodeINVERSE_DISTANCE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioPannerNodeEXPONENTIAL_DISTANCE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(WEB_AUDIO)

#endif