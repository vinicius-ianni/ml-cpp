/*
 * Copyright Elasticsearch B.V. and/or licensed to Elasticsearch B.V. under one
 * or more contributor license agreements. Licensed under the Elastic License;
 * you may not use this file except in compliance with the Elastic License.
 */
#include <core/CFastMutex.h>


namespace ml
{
namespace core
{


CFastMutex::CFastMutex(void)
    // The OSSpinLock type is just an integer, and zero means unlocked.  See
    // "man spinlock" for details.
    : m_Mutex(0)
{
}

CFastMutex::~CFastMutex(void)
{
}

void CFastMutex::lock(void)
{
    OSSpinLockLock(&m_Mutex);
}

void CFastMutex::unlock(void)
{
    OSSpinLockUnlock(&m_Mutex);
}


}
}

