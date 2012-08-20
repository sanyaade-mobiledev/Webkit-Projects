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
#include "JSDocumentType.h"

#include "DocumentType.h"
#include "JSNamedNodeMap.h"
#include "KURL.h"
#include "NamedNodeMap.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSDocumentType);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDocumentTypeTableValues[8] =
{
    { "name", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDocumentTypeName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "entities", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDocumentTypeEntities), (intptr_t)0 THUNK_GENERATOR(0) },
    { "notations", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDocumentTypeNotations), (intptr_t)0 THUNK_GENERATOR(0) },
    { "publicId", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDocumentTypePublicId), (intptr_t)0 THUNK_GENERATOR(0) },
    { "systemId", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDocumentTypeSystemId), (intptr_t)0 THUNK_GENERATOR(0) },
    { "internalSubset", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDocumentTypeInternalSubset), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDocumentTypeConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDocumentTypeTable = { 18, 15, JSDocumentTypeTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDocumentTypeConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDocumentTypeConstructorTable = { 1, 0, JSDocumentTypeConstructorTableValues, 0 };
class JSDocumentTypeConstructor : public DOMConstructorObject {
public:
    JSDocumentTypeConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSDocumentTypeConstructor::s_info = { "DocumentTypeConstructor", &DOMConstructorObject::s_info, &JSDocumentTypeConstructorTable, 0 };

JSDocumentTypeConstructor::JSDocumentTypeConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSDocumentTypePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSDocumentTypeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDocumentTypeConstructor, JSDOMWrapper>(exec, &JSDocumentTypeConstructorTable, this, propertyName, slot);
}

bool JSDocumentTypeConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDocumentTypeConstructor, JSDOMWrapper>(exec, &JSDocumentTypeConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDocumentTypePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDocumentTypePrototypeTable = { 1, 0, JSDocumentTypePrototypeTableValues, 0 };
const ClassInfo JSDocumentTypePrototype::s_info = { "DocumentTypePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSDocumentTypePrototypeTable, 0 };

JSObject* JSDocumentTypePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDocumentType>(exec, globalObject);
}

const ClassInfo JSDocumentType::s_info = { "DocumentType", &JSNode::s_info, &JSDocumentTypeTable, 0 };

JSDocumentType::JSDocumentType(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DocumentType> impl)
    : JSNode(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSDocumentType::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSDocumentTypePrototype(exec->globalData(), globalObject, JSDocumentTypePrototype::createStructure(exec->globalData(), JSNodePrototype::self(exec, globalObject)));
}

bool JSDocumentType::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSDocumentType, Base>(exec, &JSDocumentTypeTable, this, propertyName, slot);
}

bool JSDocumentType::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSDocumentType, Base>(exec, &JSDocumentTypeTable, this, propertyName, descriptor);
}

JSValue jsDocumentTypeName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDocumentType* castedThis = static_cast<JSDocumentType*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DocumentType* imp = static_cast<DocumentType*>(castedThis->impl());
    JSValue result = jsString(exec, imp->name());
    return result;
}


JSValue jsDocumentTypeEntities(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDocumentType* castedThis = static_cast<JSDocumentType*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DocumentType* imp = static_cast<DocumentType*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->entities()));
    return result;
}


JSValue jsDocumentTypeNotations(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDocumentType* castedThis = static_cast<JSDocumentType*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DocumentType* imp = static_cast<DocumentType*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->notations()));
    return result;
}


JSValue jsDocumentTypePublicId(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDocumentType* castedThis = static_cast<JSDocumentType*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DocumentType* imp = static_cast<DocumentType*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->publicId());
    return result;
}


JSValue jsDocumentTypeSystemId(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDocumentType* castedThis = static_cast<JSDocumentType*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DocumentType* imp = static_cast<DocumentType*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->systemId());
    return result;
}


JSValue jsDocumentTypeInternalSubset(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDocumentType* castedThis = static_cast<JSDocumentType*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DocumentType* imp = static_cast<DocumentType*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->internalSubset());
    return result;
}


JSValue jsDocumentTypeConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDocumentType* domObject = static_cast<JSDocumentType*>(asObject(slotBase));
    return JSDocumentType::getConstructor(exec, domObject->globalObject());
}

JSValue JSDocumentType::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDocumentTypeConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

DocumentType* toDocumentType(JSC::JSValue value)
{
    return value.inherits(&JSDocumentType::s_info) ? static_cast<JSDocumentType*>(asObject(value))->impl() : 0;
}

}
