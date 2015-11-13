/* 
 * File:   Devices.cpp
 * Author: lancelotx999
 * 
 * Created on October 27, 2015, 11:30 AM
 */

#include "Devices.h"
#include "Battery.h"

Devices::Devices() {
}

Devices::Devices(const Devices& orig) {
}

Devices::~Devices() {
}

void Devices::Connect(Battery NewBattery)
{
    CurrentBattery = NewBattery;
}

void Devices::Disconnect(Battery OldBattery)
{ 
//    CurrentBattery = null;
}


