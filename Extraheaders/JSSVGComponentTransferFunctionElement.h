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

#ifndef JSSVGComponentTransferFunctionElement_h
#define JSSVGComponentTransferFunctionElement_h

#if ENABLE(FILTERS) && ENABLE(SVG)

#include "JSDOMBinding.h"
#include "JSSVGElement.h"
#include "SVGComponentTransferFunctionElement.h"
#include "SVGElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSSVGComponentTransferFunctionElement : public JSSVGElement {
public:
    typedef JSSVGElement Base;
    static JSSVGComponentTransferFunctionElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGComponentTransferFunctionElement> impl)
    {
        JSSVGComponentTransferFunctionElement* ptr = new (NotNull, JSC::allocateCell<JSSVGComponentTransferFunctionElement>(globalObject->globalData().heap)) JSSVGComponentTransferFunctionElement(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    JSSVGComponentTransferFunctionElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGComponentTransferFunctionElement>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSSVGComponentTransferFunctionElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSVGComponentTransferFunctionElementPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGComponentTransferFunctionElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGComponentTransferFunctionElementPrototype>(globalData.heap)) JSSVGComponentTransferFunctionElementPrototype(globalData, globalObject, structure);
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
    JSSVGComponentTransferFunctionElementPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSSVGComponentTransferFunctionElementConstructor : public DOMConstructorObject {
private:
    JSSVGComponentTransferFunctionElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGComponentTransferFunctionElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGComponentTransferFunctionElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGComponentTransferFunctionElementConstructor>(*exec->heap())) JSSVGComponentTransferFunctionElementConstructor(structure, globalObject);
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

JSC::JSValue jsSVGComponentTransferFunctionElementType(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGComponentTransferFunctionElementTableValues(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGComponentTransferFunctionElementSlope(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGComponentTransferFunctionElementIntercept(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGComponentTransferFunctionElementAmplitude(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGComponentTransferFunctionElementExponent(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGComponentTransferFunctionElementOffset(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGComponentTransferFunctionElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_IDENTITY(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_TABLE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_DISCRETE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_LINEAR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_GAMMA(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(FILTERS) && ENABLE(SVG)

#endif