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

#ifndef JSAudioContext_h
#define JSAudioContext_h

#if ENABLE(WEB_AUDIO)

#include "AudioContext.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSAudioContext : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSAudioContext* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<AudioContext> impl)
    {
        JSAudioContext* ptr = new (NotNull, JSC::allocateCell<JSAudioContext>(globalObject->globalData().heap)) JSAudioContext(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSAudioContext();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    static void visitChildren(JSCell*, JSC::SlotVisitor&);

    AudioContext* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    AudioContext* m_impl;
protected:
    JSAudioContext(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<AudioContext>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSAudioContextOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, AudioContext*)
{
    DEFINE_STATIC_LOCAL(JSAudioContextOwner, jsAudioContextOwner, ());
    return &jsAudioContextOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, AudioContext*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, AudioContext*);
AudioContext* toAudioContext(JSC::JSValue);

class JSAudioContextPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSAudioContextPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSAudioContextPrototype* ptr = new (NotNull, JSC::allocateCell<JSAudioContextPrototype>(globalData.heap)) JSAudioContextPrototype(globalData, globalObject, structure);
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
    JSAudioContextPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSAudioContextConstructor : public DOMConstructorObject {
private:
    JSAudioContextConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSAudioContextConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSAudioContextConstructor* ptr = new (NotNull, JSC::allocateCell<JSAudioContextConstructor>(*exec->heap())) JSAudioContextConstructor(structure, globalObject);
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
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSAudioContext(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateBuffer(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionDecodeAudioData(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateBufferSource(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateMediaElementSource(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateGainNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateDelayNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateBiquadFilter(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateWaveShaper(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreatePanner(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateConvolver(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateDynamicsCompressor(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateAnalyser(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateJavaScriptNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateOscillator(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateWaveTable(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateChannelSplitter(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateChannelMerger(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionStartRendering(JSC::ExecState*);
// Attributes

JSC::JSValue jsAudioContextDestination(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioContextCurrentTime(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioContextSampleRate(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioContextListener(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioContextActiveSourceCount(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioContextOncomplete(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAudioContextOncomplete(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioContextConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(WEB_AUDIO)

#endif
