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

#ifndef JSHTMLFrameSetElement_h
#define JSHTMLFrameSetElement_h

#include "HTMLFrameSetElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSHTMLFrameSetElement : public JSHTMLElement {
public:
    typedef JSHTMLElement Base;
    static JSHTMLFrameSetElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLFrameSetElement> impl)
    {
        JSHTMLFrameSetElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLFrameSetElement>(globalObject->globalData().heap)) JSHTMLFrameSetElement(structure, globalObject, impl);
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
    JSHTMLFrameSetElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLFrameSetElement>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
private:
    static bool canGetItemsForName(JSC::ExecState*, HTMLFrameSetElement*, JSC::PropertyName);
    static JSC::JSValue nameGetter(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
};


class JSHTMLFrameSetElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSHTMLFrameSetElementPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLFrameSetElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLFrameSetElementPrototype>(globalData.heap)) JSHTMLFrameSetElementPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSHTMLFrameSetElementPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSHTMLFrameSetElementConstructor : public DOMConstructorObject {
private:
    JSHTMLFrameSetElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLFrameSetElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLFrameSetElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLFrameSetElementConstructor>(*exec->heap())) JSHTMLFrameSetElementConstructor(structure, globalObject);
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

JSC::JSValue jsHTMLFrameSetElementCols(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFrameSetElementCols(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementRows(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFrameSetElementRows(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnbeforeunload(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFrameSetElementOnbeforeunload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnhashchange(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFrameSetElementOnhashchange(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnmessage(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFrameSetElementOnmessage(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnoffline(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFrameSetElementOnoffline(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnonline(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFrameSetElementOnonline(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnpopstate(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFrameSetElementOnpopstate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnresize(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFrameSetElementOnresize(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnstorage(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFrameSetElementOnstorage(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnunload(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFrameSetElementOnunload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#if ENABLE(ORIENTATION_EVENTS)
JSC::JSValue jsHTMLFrameSetElementOnorientationchange(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFrameSetElementOnorientationchange(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
JSC::JSValue jsHTMLFrameSetElementOnblur(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFrameSetElementOnblur(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnerror(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFrameSetElementOnerror(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnfocus(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFrameSetElementOnfocus(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnload(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFrameSetElementOnload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
