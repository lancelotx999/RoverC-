/* 
 * File:   Drill.cpp
 * Author: lancelotx999
 * 
 * Created on October 30, 2015, 10:57 AM
 */


#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Drill.h"
#include "Battery.h"

using namespace std;


Drill::Drill() {
    SafetySwitch = 1;
}

Drill::Drill(const Drill& orig) {
}

Drill::~Drill() {
}

void Drill::SetSafety(int SafetySetting)
{
    SafetySwitch = SafetySetting;
}

void Drill::DeviceFunction()
{
    if(SafetySwitch == 1)
    {
//        cout << endl << "Safety First" << endl;
    }
    else
    {
        if(CurrentBattery->getCharge() >= 10)
        {
            CurrentBattery->setCharge(-10);

//            cout << endl << "VRMM! VRMM!" << endl;
        }
        else
        {
//            cout << endl << "Not Enough Charge" << endl;
        }
    }
    
    
}

Devices* Drill::clone() const
{
    return new Drill(*this);
}


