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

#ifndef JSXMLHttpRequest_h
#define JSXMLHttpRequest_h

#include "JSDOMBinding.h"
#include "XMLHttpRequest.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSXMLHttpRequest : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSXMLHttpRequest* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<XMLHttpRequest> impl)
    {
        JSXMLHttpRequest* ptr = new (NotNull, JSC::allocateCell<JSXMLHttpRequest>(globalObject->globalData().heap)) JSXMLHttpRequest(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSXMLHttpRequest();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    static void visitChildren(JSCell*, JSC::SlotVisitor&);


    // Custom attributes
    JSC::JSValue responseText(JSC::ExecState*) const;
    JSC::JSValue response(JSC::ExecState*) const;

    // Custom functions
    JSC::JSValue open(JSC::ExecState*);
    JSC::JSValue send(JSC::ExecState*);
    XMLHttpRequest* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    XMLHttpRequest* m_impl;
protected:
    JSXMLHttpRequest(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<XMLHttpRequest>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSXMLHttpRequestOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, XMLHttpRequest*)
{
    DEFINE_STATIC_LOCAL(JSXMLHttpRequestOwner, jsXMLHttpRequestOwner, ());
    return &jsXMLHttpRequestOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, XMLHttpRequest*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, XMLHttpRequest*);
XMLHttpRequest* toXMLHttpRequest(JSC::JSValue);

class JSXMLHttpRequestPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSXMLHttpRequestPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSXMLHttpRequestPrototype* ptr = new (NotNull, JSC::allocateCell<JSXMLHttpRequestPrototype>(globalData.heap)) JSXMLHttpRequestPrototype(globalData, globalObject, structure);
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
    JSXMLHttpRequestPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSXMLHttpRequestConstructor : public DOMConstructorObject {
private:
    JSXMLHttpRequestConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSXMLHttpRequestConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSXMLHttpRequestConstructor* ptr = new (NotNull, JSC::allocateCell<JSXMLHttpRequestConstructor>(*exec->heap())) JSXMLHttpRequestConstructor(structure, globalObject);
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
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSXMLHttpRequest(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionOpen(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionSetRequestHeader(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionSend(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionAbort(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionGetAllResponseHeaders(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionGetResponseHeader(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionOverrideMimeType(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionAddEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionRemoveEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionDispatchEvent(JSC::ExecState*);
// Attributes

JSC::JSValue jsXMLHttpRequestOnabort(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSXMLHttpRequestOnabort(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsXMLHttpRequestOnerror(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSXMLHttpRequestOnerror(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsXMLHttpRequestOnload(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSXMLHttpRequestOnload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsXMLHttpRequestOnloadend(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSXMLHttpRequestOnloadend(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsXMLHttpRequestOnloadstart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSXMLHttpRequestOnloadstart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsXMLHttpRequestOnprogress(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSXMLHttpRequestOnprogress(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsXMLHttpRequestOnreadystatechange(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSXMLHttpRequestOnreadystatechange(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsXMLHttpRequestReadyState(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#if ENABLE(XHR_RESPONSE_BLOB)
JSC::JSValue jsXMLHttpRequestAsBlob(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSXMLHttpRequestAsBlob(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
JSC::JSValue jsXMLHttpRequestWithCredentials(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSXMLHttpRequestWithCredentials(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsXMLHttpRequestUpload(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsXMLHttpRequestResponseText(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsXMLHttpRequestResponseXML(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#if ENABLE(XHR_RESPONSE_BLOB)
JSC::JSValue jsXMLHttpRequestResponseBlob(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
JSC::JSValue jsXMLHttpRequestResponseType(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSXMLHttpRequestResponseType(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsXMLHttpRequestResponse(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsXMLHttpRequestStatus(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsXMLHttpRequestStatusText(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsXMLHttpRequestConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsXMLHttpRequestUNSENT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsXMLHttpRequestOPENED(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsXMLHttpRequestHEADERS_RECEIVED(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsXMLHttpRequestLOADING(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsXMLHttpRequestDONE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
