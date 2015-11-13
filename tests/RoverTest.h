/*
 * File:   RoverTest.h
 * Author: lancelotx999
 *
 * Created on Oct 26, 2015, 12:10:44 PM
 */

#ifndef ROVERTEST_H
#define	ROVERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class RoverTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(RoverTest);

//    CPPUNIT_TEST(testMethod);
//    CPPUNIT_TEST(testFailedMethod);
    CPPUNIT_TEST(TestAttach);
    CPPUNIT_TEST(TestRadar);
    CPPUNIT_TEST(TestSolar);
    CPPUNIT_TEST(TestDrill);
    CPPUNIT_TEST(MemoryLeakTest);
    CPPUNIT_TEST(TestObjectAliasing);

    CPPUNIT_TEST_SUITE_END();

public:
    RoverTest();
    virtual ~RoverTest();
    void setUp();
    void tearDown();

private:
//    void testMethod();
//    void testFailedMethod();
    void TestAttach();
    void TestRadar();
    void TestSolar();
    void TestDrill();
    void MemoryLeakTest();
    void TestObjectAliasing();
    
};

#endif	/* ROVERTEST_H */

