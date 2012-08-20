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

#if ENABLE(DATABASE)

#include "JSSQLTransaction.h"

#include "SQLTransaction.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSQLTransaction);

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSQLTransactionPrototypeTableValues[2] =
{
    { "executeSql", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSQLTransactionPrototypeFunctionExecuteSql), (intptr_t)4 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSQLTransactionPrototypeTable = { 2, 1, JSSQLTransactionPrototypeTableValues, 0 };
static const HashTable* getJSSQLTransactionPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSSQLTransactionPrototypeTable);
}

const ClassInfo JSSQLTransactionPrototype::s_info = { "SQLTransactionPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSSQLTransactionPrototypeTable };

JSObject* JSSQLTransactionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSQLTransaction>(exec, globalObject);
}

bool JSSQLTransactionPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, getJSSQLTransactionPrototypeTable(exec), this, propertyName, slot);
}

bool JSSQLTransactionPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, getJSSQLTransactionPrototypeTable(exec), this, propertyName, descriptor);
}

const ClassInfo JSSQLTransaction::s_info = { "SQLTransaction", &JSDOMWrapper::s_info, 0, 0 };

JSSQLTransaction::JSSQLTransaction(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SQLTransaction> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSQLTransaction::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSQLTransactionPrototype(exec->globalData(), globalObject, JSSQLTransactionPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

EncodedJSValue JSC_HOST_CALL jsSQLTransactionPrototypeFunctionExecuteSql(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSQLTransaction::s_info))
        return throwVMTypeError(exec);
    JSSQLTransaction* castedThis = static_cast<JSSQLTransaction*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSQLTransaction::s_info);
    return JSValue::encode(castedThis->executeSql(exec));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SQLTransaction* impl)
{
    return wrap<JSSQLTransaction>(exec, globalObject, impl);
}

SQLTransaction* toSQLTransaction(JSC::JSValue value)
{
    return value.inherits(&JSSQLTransaction::s_info) ? static_cast<JSSQLTransaction*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(DATABASE)
