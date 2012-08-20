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
#include "JSHTMLEmbedElement.h"

#include "HTMLEmbedElement.h"
#include "HTMLNames.h"
#include "JSHTMLEmbedElementCustom.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLEmbedElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLEmbedElementTableValues[8] =
{
    { "align", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLEmbedElementAlign), (intptr_t)setJSHTMLEmbedElementAlign THUNK_GENERATOR(0) },
    { "height", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLEmbedElementHeight), (intptr_t)setJSHTMLEmbedElementHeight THUNK_GENERATOR(0) },
    { "name", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLEmbedElementName), (intptr_t)setJSHTMLEmbedElementName THUNK_GENERATOR(0) },
    { "src", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLEmbedElementSrc), (intptr_t)setJSHTMLEmbedElementSrc THUNK_GENERATOR(0) },
    { "type", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLEmbedElementType), (intptr_t)setJSHTMLEmbedElementType THUNK_GENERATOR(0) },
    { "width", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLEmbedElementWidth), (intptr_t)setJSHTMLEmbedElementWidth THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLEmbedElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLEmbedElementTable = { 19, 15, JSHTMLEmbedElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLEmbedElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLEmbedElementConstructorTable = { 1, 0, JSHTMLEmbedElementConstructorTableValues, 0 };
class JSHTMLEmbedElementConstructor : public DOMConstructorObject {
public:
    JSHTMLEmbedElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSHTMLEmbedElementConstructor::s_info = { "HTMLEmbedElementConstructor", &DOMConstructorObject::s_info, &JSHTMLEmbedElementConstructorTable, 0 };

JSHTMLEmbedElementConstructor::JSHTMLEmbedElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLEmbedElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLEmbedElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLEmbedElementConstructor, JSDOMWrapper>(exec, &JSHTMLEmbedElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLEmbedElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLEmbedElementConstructor, JSDOMWrapper>(exec, &JSHTMLEmbedElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLEmbedElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLEmbedElementPrototypeTable = { 1, 0, JSHTMLEmbedElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLEmbedElementPrototype::s_info = { "HTMLEmbedElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLEmbedElementPrototypeTable, 0 };

JSObject* JSHTMLEmbedElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLEmbedElement>(exec, globalObject);
}

const ClassInfo JSHTMLEmbedElement::s_info = { "HTMLEmbedElement", &JSHTMLElement::s_info, &JSHTMLEmbedElementTable, 0 };

JSHTMLEmbedElement::JSHTMLEmbedElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLEmbedElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLEmbedElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLEmbedElementPrototype(exec->globalData(), globalObject, JSHTMLEmbedElementPrototype::createStructure(exec->globalData(), JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLEmbedElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    if (getOwnPropertySlotDelegate(exec, propertyName, slot))
        return true;
    return getStaticValueSlot<JSHTMLEmbedElement, Base>(exec, &JSHTMLEmbedElementTable, this, propertyName, slot);
}

bool JSHTMLEmbedElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    if (getOwnPropertyDescriptorDelegate(exec, propertyName, descriptor))
        return true;
    return getStaticValueDescriptor<JSHTMLEmbedElement, Base>(exec, &JSHTMLEmbedElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLEmbedElementAlign(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLEmbedElement* castedThis = static_cast<JSHTMLEmbedElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLEmbedElement* imp = static_cast<HTMLEmbedElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::alignAttr));
    return result;
}


JSValue jsHTMLEmbedElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLEmbedElement* castedThis = static_cast<JSHTMLEmbedElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLEmbedElement* imp = static_cast<HTMLEmbedElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::heightAttr));
    return result;
}


JSValue jsHTMLEmbedElementName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLEmbedElement* castedThis = static_cast<JSHTMLEmbedElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLEmbedElement* imp = static_cast<HTMLEmbedElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::nameAttr));
    return result;
}


JSValue jsHTMLEmbedElementSrc(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLEmbedElement* castedThis = static_cast<JSHTMLEmbedElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLEmbedElement* imp = static_cast<HTMLEmbedElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getURLAttribute(WebCore::HTMLNames::srcAttr));
    return result;
}


JSValue jsHTMLEmbedElementType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLEmbedElement* castedThis = static_cast<JSHTMLEmbedElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLEmbedElement* imp = static_cast<HTMLEmbedElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::typeAttr));
    return result;
}


JSValue jsHTMLEmbedElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLEmbedElement* castedThis = static_cast<JSHTMLEmbedElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLEmbedElement* imp = static_cast<HTMLEmbedElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::widthAttr));
    return result;
}


JSValue jsHTMLEmbedElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLEmbedElement* domObject = static_cast<JSHTMLEmbedElement*>(asObject(slotBase));
    return JSHTMLEmbedElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLEmbedElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    if (putDelegate(exec, propertyName, value, slot))
        return;
    lookupPut<JSHTMLEmbedElement, Base>(exec, propertyName, value, &JSHTMLEmbedElementTable, this, slot);
}

void setJSHTMLEmbedElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLEmbedElement* castedThis = static_cast<JSHTMLEmbedElement*>(thisObject);
    HTMLEmbedElement* imp = static_cast<HTMLEmbedElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::alignAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLEmbedElementHeight(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLEmbedElement* castedThis = static_cast<JSHTMLEmbedElement*>(thisObject);
    HTMLEmbedElement* imp = static_cast<HTMLEmbedElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::heightAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLEmbedElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLEmbedElement* castedThis = static_cast<JSHTMLEmbedElement*>(thisObject);
    HTMLEmbedElement* imp = static_cast<HTMLEmbedElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::nameAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLEmbedElementSrc(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLEmbedElement* castedThis = static_cast<JSHTMLEmbedElement*>(thisObject);
    HTMLEmbedElement* imp = static_cast<HTMLEmbedElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::srcAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLEmbedElementType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLEmbedElement* castedThis = static_cast<JSHTMLEmbedElement*>(thisObject);
    HTMLEmbedElement* imp = static_cast<HTMLEmbedElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::typeAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLEmbedElementWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLEmbedElement* castedThis = static_cast<JSHTMLEmbedElement*>(thisObject);
    HTMLEmbedElement* imp = static_cast<HTMLEmbedElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::widthAttr, valueToStringWithNullCheck(exec, value));
}


JSValue JSHTMLEmbedElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLEmbedElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
