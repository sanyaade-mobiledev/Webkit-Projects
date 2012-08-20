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

#include "JSLowPass2FilterNode.h"

#include "AudioParam.h"
#include "JSAudioParam.h"
#include "LowPass2FilterNode.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSLowPass2FilterNode);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSLowPass2FilterNodeTableValues[4] =
{
    { "cutoff", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLowPass2FilterNodeCutoff), (intptr_t)0 THUNK_GENERATOR(0) },
    { "resonance", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLowPass2FilterNodeResonance), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLowPass2FilterNodeConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSLowPass2FilterNodeTable = { 9, 7, JSLowPass2FilterNodeTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSLowPass2FilterNodeConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSLowPass2FilterNodeConstructorTable = { 1, 0, JSLowPass2FilterNodeConstructorTableValues, 0 };
class JSLowPass2FilterNodeConstructor : public DOMConstructorObject {
public:
    JSLowPass2FilterNodeConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSLowPass2FilterNodeConstructor::s_info = { "LowPass2FilterNodeConstructor", &DOMConstructorObject::s_info, &JSLowPass2FilterNodeConstructorTable, 0 };

JSLowPass2FilterNodeConstructor::JSLowPass2FilterNodeConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSLowPass2FilterNodePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSLowPass2FilterNodeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSLowPass2FilterNodeConstructor, JSDOMWrapper>(exec, &JSLowPass2FilterNodeConstructorTable, this, propertyName, slot);
}

bool JSLowPass2FilterNodeConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSLowPass2FilterNodeConstructor, JSDOMWrapper>(exec, &JSLowPass2FilterNodeConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSLowPass2FilterNodePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSLowPass2FilterNodePrototypeTable = { 1, 0, JSLowPass2FilterNodePrototypeTableValues, 0 };
const ClassInfo JSLowPass2FilterNodePrototype::s_info = { "LowPass2FilterNodePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSLowPass2FilterNodePrototypeTable, 0 };

JSObject* JSLowPass2FilterNodePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSLowPass2FilterNode>(exec, globalObject);
}

const ClassInfo JSLowPass2FilterNode::s_info = { "LowPass2FilterNode", &JSAudioNode::s_info, &JSLowPass2FilterNodeTable, 0 };

JSLowPass2FilterNode::JSLowPass2FilterNode(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<LowPass2FilterNode> impl)
    : JSAudioNode(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSLowPass2FilterNode::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSLowPass2FilterNodePrototype(exec->globalData(), globalObject, JSLowPass2FilterNodePrototype::createStructure(exec->globalData(), JSAudioNodePrototype::self(exec, globalObject)));
}

bool JSLowPass2FilterNode::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSLowPass2FilterNode, Base>(exec, &JSLowPass2FilterNodeTable, this, propertyName, slot);
}

bool JSLowPass2FilterNode::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSLowPass2FilterNode, Base>(exec, &JSLowPass2FilterNodeTable, this, propertyName, descriptor);
}

JSValue jsLowPass2FilterNodeCutoff(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSLowPass2FilterNode* castedThis = static_cast<JSLowPass2FilterNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    LowPass2FilterNode* imp = static_cast<LowPass2FilterNode*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->cutoff()));
    return result;
}


JSValue jsLowPass2FilterNodeResonance(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSLowPass2FilterNode* castedThis = static_cast<JSLowPass2FilterNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    LowPass2FilterNode* imp = static_cast<LowPass2FilterNode*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->resonance()));
    return result;
}


JSValue jsLowPass2FilterNodeConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSLowPass2FilterNode* domObject = static_cast<JSLowPass2FilterNode*>(asObject(slotBase));
    return JSLowPass2FilterNode::getConstructor(exec, domObject->globalObject());
}

JSValue JSLowPass2FilterNode::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSLowPass2FilterNodeConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, LowPass2FilterNode* impl)
{
    return wrap<JSLowPass2FilterNode>(exec, globalObject, impl);
}


}

#endif // ENABLE(WEB_AUDIO)
