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

#ifndef JSAudioBuffer_h
#define JSAudioBuffer_h

#if ENABLE(WEB_AUDIO)

#include "AudioBuffer.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSAudioBuffer : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSAudioBuffer* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<AudioBuffer> impl)
    {
        JSAudioBuffer* ptr = new (NotNull, JSC::allocateCell<JSAudioBuffer>(globalObject->globalData().heap)) JSAudioBuffer(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSAudioBuffer();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    AudioBuffer* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    AudioBuffer* m_impl;
protected:
    JSAudioBuffer(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<AudioBuffer>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSAudioBufferOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, AudioBuffer*)
{
    DEFINE_STATIC_LOCAL(JSAudioBufferOwner, jsAudioBufferOwner, ());
    return &jsAudioBufferOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, AudioBuffer*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, AudioBuffer*);
AudioBuffer* toAudioBuffer(JSC::JSValue);

class JSAudioBufferPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSAudioBufferPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSAudioBufferPrototype* ptr = new (NotNull, JSC::allocateCell<JSAudioBufferPrototype>(globalData.heap)) JSAudioBufferPrototype(globalData, globalObject, structure);
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
    JSAudioBufferPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSAudioBufferConstructor : public DOMConstructorObject {
private:
    JSAudioBufferConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSAudioBufferConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSAudioBufferConstructor* ptr = new (NotNull, JSC::allocateCell<JSAudioBufferConstructor>(*exec->heap())) JSAudioBufferConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsAudioBufferPrototypeFunctionGetChannelData(JSC::ExecState*);
// Attributes

JSC::JSValue jsAudioBufferLength(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioBufferDuration(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioBufferSampleRate(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioBufferGain(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAudioBufferGain(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioBufferNumberOfChannels(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioBufferConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(WEB_AUDIO)

#endif
