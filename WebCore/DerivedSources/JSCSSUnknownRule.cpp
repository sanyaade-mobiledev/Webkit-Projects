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
#include "JSCSSUnknownRule.h"

#include "CSSUnknownRule.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCSSUnknownRule);

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSUnknownRulePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSUnknownRulePrototypeTable = { 1, 0, JSCSSUnknownRulePrototypeTableValues, 0 };
const ClassInfo JSCSSUnknownRulePrototype::s_info = { "CSSUnknownRulePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSCSSUnknownRulePrototypeTable, 0 };

JSObject* JSCSSUnknownRulePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCSSUnknownRule>(exec, globalObject);
}

const ClassInfo JSCSSUnknownRule::s_info = { "CSSUnknownRule", &JSCSSRule::s_info, 0, 0 };

JSCSSUnknownRule::JSCSSUnknownRule(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CSSUnknownRule> impl)
    : JSCSSRule(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSCSSUnknownRule::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSCSSUnknownRulePrototype(exec->globalData(), globalObject, JSCSSUnknownRulePrototype::createStructure(exec->globalData(), JSCSSRulePrototype::self(exec, globalObject)));
}


}
