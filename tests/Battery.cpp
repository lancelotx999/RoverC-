/* 
 * File:   Battery.cpp
 * Author: lancelotx999
 * 
 * Created on October 27, 2015, 11:13 AM
 */

#include "Battery.h"

Battery::Battery() 
{
    Charge = 100;
    BatteryObject = new Object();
}

Battery::Battery(const Battery& orig) {
}

Battery::~Battery() 
{
    BatteryObject->~Object();
}

int Battery::getCharge() const
{
    return Charge;
}

void Battery::setCharge(int AddCharge)
{
    Charge = Charge + AddCharge;
}

    


