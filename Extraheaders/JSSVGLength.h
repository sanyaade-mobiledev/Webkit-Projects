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

#ifndef JSSVGLength_h
#define JSSVGLength_h

#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include "SVGAnimatedPropertyTearOff.h"
#include "SVGElement.h"
#include "SVGLength.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSSVGLength : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSSVGLength* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPropertyTearOff<SVGLength> > impl)
    {
        JSSVGLength* ptr = new (NotNull, JSC::allocateCell<JSSVGLength>(globalObject->globalData().heap)) JSSVGLength(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSSVGLength();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom attributes
    JSC::JSValue value(JSC::ExecState*) const;
    void setValue(JSC::ExecState*, JSC::JSValue);

    // Custom functions
    JSC::JSValue convertToSpecifiedUnits(JSC::ExecState*);
    SVGPropertyTearOff<SVGLength> * impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    SVGPropertyTearOff<SVGLength> * m_impl;
protected:
    JSSVGLength(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGPropertyTearOff<SVGLength> >);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSSVGLengthOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, SVGPropertyTearOff<SVGLength> *)
{
    DEFINE_STATIC_LOCAL(JSSVGLengthOwner, jsSVGLengthOwner, ());
    return &jsSVGLengthOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, SVGPropertyTearOff<SVGLength> *)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, SVGPropertyTearOff<SVGLength> *);
SVGPropertyTearOff<SVGLength> * toSVGLength(JSC::JSValue);

class JSSVGLengthPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSVGLengthPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGLengthPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGLengthPrototype>(globalData.heap)) JSSVGLengthPrototype(globalData, globalObject, structure);
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
    JSSVGLengthPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSSVGLengthConstructor : public DOMConstructorObject {
private:
    JSSVGLengthConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGLengthConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGLengthConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGLengthConstructor>(*exec->heap())) JSSVGLengthConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsSVGLengthPrototypeFunctionNewValueSpecifiedUnits(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGLengthPrototypeFunctionConvertToSpecifiedUnits(JSC::ExecState*);
// Attributes

JSC::JSValue jsSVGLengthUnitType(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGLengthValue(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGLengthValue(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGLengthValueInSpecifiedUnits(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGLengthValueInSpecifiedUnits(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGLengthValueAsString(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGLengthValueAsString(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGLengthConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsSVGLengthSVG_LENGTHTYPE_UNKNOWN(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGLengthSVG_LENGTHTYPE_NUMBER(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGLengthSVG_LENGTHTYPE_PERCENTAGE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGLengthSVG_LENGTHTYPE_EMS(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGLengthSVG_LENGTHTYPE_EXS(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGLengthSVG_LENGTHTYPE_PX(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGLengthSVG_LENGTHTYPE_CM(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGLengthSVG_LENGTHTYPE_MM(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGLengthSVG_LENGTHTYPE_IN(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGLengthSVG_LENGTHTYPE_PT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGLengthSVG_LENGTHTYPE_PC(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
