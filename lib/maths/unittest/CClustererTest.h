/*
 * Copyright Elasticsearch B.V. and/or licensed to Elasticsearch B.V. under one
 * or more contributor license agreements. Licensed under the Elastic License;
 * you may not use this file except in compliance with the Elastic License.
 */

#ifndef INCLUDED_CClustererTest_h
#define INCLUDED_CClustererTest_h

#include <cppunit/extensions/HelperMacros.h>

class CClustererTest : public CppUnit::TestFixture
{
    public:
        void testIndexGenerator(void);

        static CppUnit::Test *suite(void);
};

#endif // INCLUDED_CClustererTest_h
