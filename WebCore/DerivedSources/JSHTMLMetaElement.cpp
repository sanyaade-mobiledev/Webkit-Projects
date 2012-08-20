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

#include "config.h"
#include "JSHTMLMetaElement.h"

#include "HTMLMetaElement.h"
#include "HTMLNames.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLMetaElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLMetaElementTableValues[6] =
{
    { "content", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMetaElementContent), (intptr_t)setJSHTMLMetaElementContent THUNK_GENERATOR(0) },
    { "httpEquiv", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMetaElementHttpEquiv), (intptr_t)setJSHTMLMetaElementHttpEquiv THUNK_GENERATOR(0) },
    { "name", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMetaElementName), (intptr_t)setJSHTMLMetaElementName THUNK_GENERATOR(0) },
    { "scheme", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMetaElementScheme), (intptr_t)setJSHTMLMetaElementScheme THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMetaElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLMetaElementTable = { 17, 15, JSHTMLMetaElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLMetaElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLMetaElementConstructorTable = { 1, 0, JSHTMLMetaElementConstructorTableValues, 0 };
class JSHTMLMetaElementConstructor : public DOMConstructorObject {
public:
    JSHTMLMetaElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSHTMLMetaElementConstructor::s_info = { "HTMLMetaElementConstructor", &DOMConstructorObject::s_info, &JSHTMLMetaElementConstructorTable, 0 };

JSHTMLMetaElementConstructor::JSHTMLMetaElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLMetaElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLMetaElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMetaElementConstructor, JSDOMWrapper>(exec, &JSHTMLMetaElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLMetaElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLMetaElementConstructor, JSDOMWrapper>(exec, &JSHTMLMetaElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLMetaElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLMetaElementPrototypeTable = { 1, 0, JSHTMLMetaElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLMetaElementPrototype::s_info = { "HTMLMetaElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLMetaElementPrototypeTable, 0 };

JSObject* JSHTMLMetaElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLMetaElement>(exec, globalObject);
}

const ClassInfo JSHTMLMetaElement::s_info = { "HTMLMetaElement", &JSHTMLElement::s_info, &JSHTMLMetaElementTable, 0 };

JSHTMLMetaElement::JSHTMLMetaElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLMetaElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLMetaElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLMetaElementPrototype(exec->globalData(), globalObject, JSHTMLMetaElementPrototype::createStructure(exec->globalData(), JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLMetaElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSHTMLMetaElement, Base>(exec, &JSHTMLMetaElementTable, this, propertyName, slot);
}

bool JSHTMLMetaElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSHTMLMetaElement, Base>(exec, &JSHTMLMetaElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLMetaElementContent(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMetaElement* castedThis = static_cast<JSHTMLMetaElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::contentAttr));
    return result;
}


JSValue jsHTMLMetaElementHttpEquiv(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMetaElement* castedThis = static_cast<JSHTMLMetaElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::http_equivAttr));
    return result;
}


JSValue jsHTMLMetaElementName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMetaElement* castedThis = static_cast<JSHTMLMetaElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::nameAttr));
    return result;
}


JSValue jsHTMLMetaElementScheme(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMetaElement* castedThis = static_cast<JSHTMLMetaElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::schemeAttr));
    return result;
}


JSValue jsHTMLMetaElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMetaElement* domObject = static_cast<JSHTMLMetaElement*>(asObject(slotBase));
    return JSHTMLMetaElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLMetaElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSHTMLMetaElement, Base>(exec, propertyName, value, &JSHTMLMetaElementTable, this, slot);
}

void setJSHTMLMetaElementContent(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMetaElement* castedThis = static_cast<JSHTMLMetaElement*>(thisObject);
    HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::contentAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLMetaElementHttpEquiv(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMetaElement* castedThis = static_cast<JSHTMLMetaElement*>(thisObject);
    HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::http_equivAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLMetaElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMetaElement* castedThis = static_cast<JSHTMLMetaElement*>(thisObject);
    HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::nameAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLMetaElementScheme(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMetaElement* castedThis = static_cast<JSHTMLMetaElement*>(thisObject);
    HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::schemeAttr, valueToStringWithNullCheck(exec, value));
}


JSValue JSHTMLMetaElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLMetaElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
