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

#ifndef JSElement_h
#define JSElement_h

#include "Element.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include <runtime/JSObject.h>
#include <runtime/Lookup.h>
#include <wtf/AlwaysInline.h>

namespace WebCore {

class JSElement : public JSNode {
public:
    typedef JSNode Base;
    static JSElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Element> impl)
    {
        JSElement* ptr = new (NotNull, JSC::allocateCell<JSElement>(globalObject->globalData().heap)) JSElement(structure, globalObject, impl);
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
    Element* impl() const
    {
        return static_cast<Element*>(Base::impl());
    }
protected:
    JSElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<Element>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

ALWAYS_INLINE bool JSElement::getOwnPropertySlot(JSC::JSCell* cell, JSC::ExecState* exec, JSC::PropertyName propertyName, JSC::PropertySlot& slot)
{
    JSElement* thisObject = JSC::jsCast<JSElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return JSC::getStaticValueSlot<JSElement, Base>(exec, s_info.staticPropHashTable, thisObject, propertyName, slot);
}

ALWAYS_INLINE bool JSElement::getOwnPropertyDescriptor(JSC::JSObject* object, JSC::ExecState* exec, JSC::PropertyName propertyName, JSC::PropertyDescriptor& descriptor)
{
    JSElement* thisObject = JSC::jsCast<JSElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return JSC::getStaticValueDescriptor<JSElement, Base>(exec, s_info.staticPropHashTable, thisObject, propertyName, descriptor);
}

Element* toElement(JSC::JSValue);
JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject*, Element*);

class JSElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSElementPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSElementPrototype>(globalData.heap)) JSElementPrototype(globalData, globalObject, structure);
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
    JSElementPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSElementConstructor : public DOMConstructorObject {
private:
    JSElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSElementConstructor>(*exec->heap())) JSElementConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionGetAttribute(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionSetAttribute(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionRemoveAttribute(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionGetAttributeNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionSetAttributeNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionRemoveAttributeNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionGetElementsByTagName(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionGetAttributeNS(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionSetAttributeNS(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionRemoveAttributeNS(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionGetElementsByTagNameNS(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionGetAttributeNodeNS(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionSetAttributeNodeNS(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionHasAttribute(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionHasAttributeNS(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionFocus(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionBlur(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionScrollIntoView(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionScrollIntoViewIfNeeded(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionScrollByLines(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionScrollByPages(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionGetElementsByClassName(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionQuerySelector(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionQuerySelectorAll(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionWebkitMatchesSelector(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionGetClientRects(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionGetBoundingClientRect(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionWebkitRequestFullScreen(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsElementPrototypeFunctionWebkitRequestFullscreen(JSC::ExecState*);
// Attributes

JSC::JSValue jsElementTagName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementStyle(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementOffsetLeft(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementOffsetTop(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementOffsetWidth(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementOffsetHeight(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementOffsetParent(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementClientLeft(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementClientTop(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementClientWidth(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementClientHeight(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementScrollLeft(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementScrollLeft(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementScrollTop(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementScrollTop(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementScrollWidth(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementScrollHeight(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementDataset(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementFirstElementChild(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementLastElementChild(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementPreviousElementSibling(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementNextElementSibling(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementChildElementCount(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementWebkitRegionOverflow(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsElementOnabort(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnabort(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnblur(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnblur(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnchange(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnchange(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnclick(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnclick(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOncontextmenu(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOncontextmenu(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOndblclick(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOndblclick(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOndrag(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOndrag(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOndragend(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOndragend(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOndragenter(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOndragenter(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOndragleave(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOndragleave(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOndragover(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOndragover(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOndragstart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOndragstart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOndrop(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOndrop(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnerror(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnerror(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnfocus(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnfocus(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOninput(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOninput(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOninvalid(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOninvalid(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnkeydown(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnkeydown(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnkeypress(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnkeypress(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnkeyup(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnkeyup(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnload(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnmousedown(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnmousedown(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnmousemove(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnmousemove(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnmouseout(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnmouseout(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnmouseover(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnmouseover(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnmouseup(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnmouseup(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnmousewheel(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnmousewheel(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnscroll(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnscroll(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnselect(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnselect(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnsubmit(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnsubmit(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnbeforecut(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnbeforecut(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOncut(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOncut(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnbeforecopy(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnbeforecopy(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOncopy(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOncopy(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnbeforepaste(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnbeforepaste(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnpaste(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnpaste(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnreset(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnreset(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnsearch(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnsearch(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnselectstart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnselectstart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#if ENABLE(TOUCH_EVENTS)
JSC::JSValue jsElementOntouchstart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOntouchstart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(TOUCH_EVENTS)
JSC::JSValue jsElementOntouchmove(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOntouchmove(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(TOUCH_EVENTS)
JSC::JSValue jsElementOntouchend(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOntouchend(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(TOUCH_EVENTS)
JSC::JSValue jsElementOntouchcancel(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOntouchcancel(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(FULLSCREEN_API)
JSC::JSValue jsElementOnwebkitfullscreenchange(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnwebkitfullscreenchange(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(FULLSCREEN_API)
JSC::JSValue jsElementOnwebkitfullscreenerror(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSElementOnwebkitfullscreenerror(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
JSC::JSValue jsElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsElementALLOW_KEYBOARD_INPUT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
