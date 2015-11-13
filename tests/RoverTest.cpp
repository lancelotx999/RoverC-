/*
 * File:   RoverTest.cpp
 * Author: lancelotx999
 *
 * Created on Oct 26, 2015, 12:10:44 PM
 */

#include "RoverTest.h"
#include "Rover.h"
#include "Radar.h"
#include "Solar.h"
#include "Drill.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Drill.h"
#include "Battery.h"

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(RoverTest);

RoverTest::RoverTest() {
}

RoverTest::~RoverTest() {
}

void RoverTest::setUp() {
}

void RoverTest::tearDown() {
}

//void RoverTest::testMethod() {
//    CPPUNIT_ASSERT(true);
//}
//
//void RoverTest::testFailedMethod() {
//    CPPUNIT_ASSERT(true);
//}

void RoverTest::TestAttach()
{
    Rover* rover = new Rover();
//    Radar TestRadar
    rover->attachDevice( new Radar() );
    CPPUNIT_ASSERT( rover->deviceCount() == 1 );
    
    rover->attachDevice( new Radar() );
    CPPUNIT_ASSERT( rover->deviceCount() == 2 );
    delete rover;
}

void RoverTest::TestRadar()
{
    Radar* TestRadar = new Radar();
    Rover* TestRover = new Rover();
    Battery* TestBattery = new Battery();
    
    TestRover->attachDevice(TestRadar);
    TestRover->GetDevice(0)->Connect(TestBattery);
    
    CPPUNIT_ASSERT( TestRover->deviceCount() == 1 );
    CPPUNIT_ASSERT( TestRover->GetDevice(0)->GetBattery()->getCharge() == 100 );
    
    //cout renders the test invalid, comment out cout in Radar.cpp
    TestRover->GetDevice(0)->DeviceFunction();
    
    CPPUNIT_ASSERT( TestRover->GetDevice(0)->GetBattery()->getCharge() == 96 );    
    
    delete TestRover;
//    delete TestRadar;
    delete TestBattery;
}

void RoverTest::TestSolar()
{
    Solar* TestSolar = new Solar();
    Rover* TestRover = new Rover();
    Battery* TestBattery = new Battery();
    
    TestRover->attachDevice(TestSolar);
    TestRover->GetDevice(0)->Connect(TestBattery);
    
    CPPUNIT_ASSERT( TestRover->deviceCount() == 1 );
    CPPUNIT_ASSERT( TestRover->GetDevice(0)->GetBattery()->getCharge() == 100 );
    
    //cout renders the test invalid, comment out cout in Solar.cpp
    TestRover->GetDevice(0)->DeviceFunction();
    
    //Test
    TestRover->GetDevice(0)->GetBattery()->setCharge(-100);
    
    //cout renders the test invalid, comment out cout in Solar.cpp
    TestRover->GetDevice(0)->DeviceFunction();
    
    CPPUNIT_ASSERT( TestRover->GetDevice(0)->GetBattery()->getCharge() == 4 ); 
    
    delete TestRover;
//    delete TestSolar;
    delete TestBattery;
}

void RoverTest::TestDrill()
{
    Drill* TestDrill = new Drill();
    Rover* TestRover = new Rover();
    Battery* TestBattery = new Battery();
    
    TestRover->attachDevice(TestDrill);
    TestRover->GetDevice(0)->Connect(TestBattery);
    
    CPPUNIT_ASSERT( TestRover->deviceCount() == 1 );
    CPPUNIT_ASSERT( TestRover->GetDevice(0)->GetBattery()->getCharge() == 100 );
    
    //cout renders the test invalid, comment out cout in Solar.cpp
    TestRover->GetDevice(0)->DeviceFunction();
    
    TestDrill->SetSafety(0);
    
    TestRover->GetDevice(0)->DeviceFunction();
    
    //Test
    TestRover->GetDevice(0)->GetBattery()->setCharge(-90);
    
    //cout renders the test invalid, comment out cout in Drill.cpp
    TestRover->GetDevice(0)->DeviceFunction();

    CPPUNIT_ASSERT( TestRover->GetDevice(0)->GetBattery()->getCharge() == 0 ); 
    
    delete TestRover;
//    delete TestDrill;
    delete TestBattery;
}

void RoverTest::MemoryLeakTest()
{
    Rover* rover = new Rover();
    rover->attachDevice( new Radar() );
    delete rover;
    
    //cout<< "\nOBJECT COUNT: "<< Object::getCount()<<"\n";
    CPPUNIT_ASSERT( Object::getCount() == 0 );
}

void RoverTest::TestObjectAliasing()
{
    Rover* rover = new Rover();
    rover->attachDevice( new Radar() );
    
    Rover* copy = new Rover(*rover);
    
    delete rover;
    // if this test fails, then the following line causes a crash
    
    delete copy;
    // if the program is still running, then the test has passed
    CPPUNIT_ASSERT (true);
}