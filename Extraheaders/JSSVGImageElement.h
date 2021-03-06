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

#ifndef JSSVGImageElement_h
#define JSSVGImageElement_h

#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include "JSSVGElement.h"
#include "SVGElement.h"
#include "SVGImageElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSSVGImageElement : public JSSVGElement {
public:
    typedef JSSVGElement Base;
    static JSSVGImageElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGImageElement> impl)
    {
        JSSVGImageElement* ptr = new (NotNull, JSC::allocateCell<JSSVGImageElement>(globalObject->globalData().heap)) JSSVGImageElement(structure, globalObject, impl);
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
    JSSVGImageElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGImageElement>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSSVGImageElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSVGImageElementPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGImageElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGImageElementPrototype>(globalData.heap)) JSSVGImageElementPrototype(globalData, globalObject, structure);
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
    JSSVGImageElementPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSSVGImageElementConstructor : public DOMConstructorObject {
private:
    JSSVGImageElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGImageElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGImageElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGImageElementConstructor>(*exec->heap())) JSSVGImageElementConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsSVGImageElementPrototypeFunctionHasExtension(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGImageElementPrototypeFunctionGetPresentationAttribute(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGImageElementPrototypeFunctionGetBBox(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGImageElementPrototypeFunctionGetCTM(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGImageElementPrototypeFunctionGetScreenCTM(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGImageElementPrototypeFunctionGetTransformToElement(JSC::ExecState*);
// Attributes

JSC::JSValue jsSVGImageElementX(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGImageElementY(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGImageElementWidth(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGImageElementHeight(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGImageElementPreserveAspectRatio(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGImageElementHref(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGImageElementRequiredFeatures(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGImageElementRequiredExtensions(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGImageElementSystemLanguage(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGImageElementXmllang(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGImageElementXmllang(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGImageElementXmlspace(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGImageElementXmlspace(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGImageElementExternalResourcesRequired(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGImageElementClassName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGImageElementStyle(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGImageElementTransform(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGImageElementNearestViewportElement(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGImageElementFarthestViewportElement(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGImageElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
