/* 
 * File:   Rover.cpp
 * Author: lancelotx999
 * 
 * Created on October 26, 2015, 12:33 PM
 */

#include "Rover.h"
#include "Radar.h"

Rover::Rover() 
{
    DeviceCount = 0;
    //RoverObject = new Object();
}

Rover::Rover(const Rover& orig) 
{
    //this->DeviceCount = orig.DeviceCount;
    
    DeviceCount = orig.DeviceCount;
    
    for(int x = DeviceCount-1; x != -1; x--)
    {
        ListOfDevice[x] = orig.ListOfDevice[x]->clone();
    }
    
    //RoverObject = orig.RoverObject;
}

Rover::~Rover() 
{
    
    for(int x = DeviceCount-1; x != -1; x--)
    {
        delete ListOfDevice[x];
    }
    
    //delete RoverObject;
    
}

void Rover:: attachDevice(Devices* NewDevice)
{
    ListOfDevice[DeviceCount] = NewDevice;
    DeviceCount++;
    
}

int Rover:: deviceCount() const
{
    return DeviceCount;
}

Devices* Rover::GetDevice(int DeviceNumber) const
{
    return ListOfDevice[DeviceNumber];
}


