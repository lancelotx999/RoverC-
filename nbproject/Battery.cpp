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
}

Battery::Battery(const Battery& orig) {
}

Battery::~Battery() {
}

int Battery::getCharge() const
{
    return Charge;
}

void Battery::setCharge(int AddCharge)
{
    Charge = Charge + AddCharge;
}

    


