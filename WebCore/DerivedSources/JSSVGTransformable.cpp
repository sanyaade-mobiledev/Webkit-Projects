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

#if ENABLE(SVG)

#include "JSSVGTransformable.h"

#include "JSSVGAnimatedTransformList.h"
#include "SVGTransformable.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGTransformable);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGTransformableTableValues[2] =
{
    { "transform", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformableTransform), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGTransformableTable = { 2, 1, JSSVGTransformableTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGTransformablePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGTransformablePrototypeTable = { 1, 0, JSSVGTransformablePrototypeTableValues, 0 };
const ClassInfo JSSVGTransformablePrototype::s_info = { "SVGTransformablePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGTransformablePrototypeTable, 0 };

JSObject* JSSVGTransformablePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGTransformable>(exec, globalObject);
}

const ClassInfo JSSVGTransformable::s_info = { "SVGTransformable", &JSSVGLocatable::s_info, &JSSVGTransformableTable, 0 };

JSSVGTransformable::JSSVGTransformable(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGTransformable> impl)
    : JSSVGLocatable(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGTransformable::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGTransformablePrototype(exec->globalData(), globalObject, JSSVGTransformablePrototype::createStructure(exec->globalData(), JSSVGLocatablePrototype::self(exec, globalObject)));
}

bool JSSVGTransformable::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGTransformable, Base>(exec, &JSSVGTransformableTable, this, propertyName, slot);
}

bool JSSVGTransformable::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGTransformable, Base>(exec, &JSSVGTransformableTable, this, propertyName, descriptor);
}

JSValue jsSVGTransformableTransform(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTransformable* castedThis = static_cast<JSSVGTransformable*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTransformable* imp = static_cast<SVGTransformable*>(castedThis->impl());
    RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}



}

#endif // ENABLE(SVG)
