/* 
 * File:   Rover.h
 * Author: lancelotx999
 *
 * Created on October 26, 2015, 12:33 PM
 */

#ifndef ROVER_H
#define	ROVER_H

#include "Radar.h"
#include "Devices.h"
#include "Battery.h"
#include "Object.h"

class Rover : public Object
{
public:
    Rover();
    Rover(const Rover& orig);
    virtual ~Rover();
    void attachDevice(Devices* NewDevice);
    void dettachDevice(Devices* OldDevice);
    
    void ConnectBattery(Battery NewBattery);
    void DisconnectBattery(Battery OldBattery);
    int deviceCount () const;
    Devices* GetDevice(int DeviceNumber) const;
    
    void operator=(const Rover &ob)
    {
        this->DeviceCount = ob.DeviceCount;
        
        for(int x = DeviceCount-1; x != -1; x--)
        {
            this->ListOfDevice[x] = ob.ListOfDevice[x];
        }
        this->RoverObject = ob.RoverObject;
    }
    
    
private:
    int DeviceCount;
    Devices* ListOfDevice [5];
    Object* RoverObject;

};

#endif	/* ROVER_H */

