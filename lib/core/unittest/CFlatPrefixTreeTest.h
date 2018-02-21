/*
 * Copyright Elasticsearch B.V. and/or licensed to Elasticsearch B.V. under one
 * or more contributor license agreements. Licensed under the Elastic License;
 * you may not use this file except in compliance with the Elastic License.
 */
#ifndef INCLUDED_CFlatPrefixTreeTest_h
#define INCLUDED_CFlatPrefixTreeTest_h

#include <cppunit/extensions/HelperMacros.h>


class CFlatPrefixTreeTest : public CppUnit::TestFixture
{
    public:
        void testBuildGivenUnsortedInput(void);
        void testBuildGivenSortedInputWithDuplicates(void);
        void testEmptyString(void);
        void testSimple(void);
        void testLeafAndBranch(void);
        void testMatchesStartGivenStringThatMatchesMoreThanAGivenPrefix(void);
        void testMatchesFullyGivenStringThatIsSubstringOfPrefix(void);
        void testRandom(void);

        static CppUnit::Test *suite();
};

#endif // INCLUDED_CFlatPrefixTreeTest_h
