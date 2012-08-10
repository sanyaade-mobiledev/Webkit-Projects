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

#if ENABLE(WEB_AUDIO)

#include "JSDynamicsCompressorNode.h"

#include "DynamicsCompressorNode.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSDynamicsCompressorNode);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDynamicsCompressorNodeTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDynamicsCompressorNodeConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDynamicsCompressorNodeTable = { 2, 1, JSDynamicsCompressorNodeTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDynamicsCompressorNodeConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDynamicsCompressorNodeConstructorTable = { 1, 0, JSDynamicsCompressorNodeConstructorTableValues, 0 };
class JSDynamicsCompressorNodeConstructor : public DOMConstructorObject {
public:
    JSDynamicsCompressorNodeConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSDynamicsCompressorNodeConstructor::s_info = { "DynamicsCompressorNodeConstructor", &DOMConstructorObject::s_info, &JSDynamicsCompressorNodeConstructorTable, 0 };

JSDynamicsCompressorNodeConstructor::JSDynamicsCompressorNodeConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSDynamicsCompressorNodePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSDynamicsCompressorNodeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDynamicsCompressorNodeConstructor, JSDOMWrapper>(exec, &JSDynamicsCompressorNodeConstructorTable, this, propertyName, slot);
}

bool JSDynamicsCompressorNodeConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDynamicsCompressorNodeConstructor, JSDOMWrapper>(exec, &JSDynamicsCompressorNodeConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDynamicsCompressorNodePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDynamicsCompressorNodePrototypeTable = { 1, 0, JSDynamicsCompressorNodePrototypeTableValues, 0 };
const ClassInfo JSDynamicsCompressorNodePrototype::s_info = { "DynamicsCompressorNodePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSDynamicsCompressorNodePrototypeTable, 0 };

JSObject* JSDynamicsCompressorNodePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDynamicsCompressorNode>(exec, globalObject);
}

const ClassInfo JSDynamicsCompressorNode::s_info = { "DynamicsCompressorNode", &JSAudioNode::s_info, &JSDynamicsCompressorNodeTable, 0 };

JSDynamicsCompressorNode::JSDynamicsCompressorNode(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DynamicsCompressorNode> impl)
    : JSAudioNode(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSDynamicsCompressorNode::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSDynamicsCompressorNodePrototype(exec->globalData(), globalObject, JSDynamicsCompressorNodePrototype::createStructure(exec->globalData(), JSAudioNodePrototype::self(exec, globalObject)));
}

bool JSDynamicsCompressorNode::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSDynamicsCompressorNode, Base>(exec, &JSDynamicsCompressorNodeTable, this, propertyName, slot);
}

bool JSDynamicsCompressorNode::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSDynamicsCompressorNode, Base>(exec, &JSDynamicsCompressorNodeTable, this, propertyName, descriptor);
}

JSValue jsDynamicsCompressorNodeConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDynamicsCompressorNode* domObject = static_cast<JSDynamicsCompressorNode*>(asObject(slotBase));
    return JSDynamicsCompressorNode::getConstructor(exec, domObject->globalObject());
}

JSValue JSDynamicsCompressorNode::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDynamicsCompressorNodeConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DynamicsCompressorNode* impl)
{
    return wrap<JSDynamicsCompressorNode>(exec, globalObject, impl);
}


}

#endif // ENABLE(WEB_AUDIO)