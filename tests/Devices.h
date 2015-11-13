/* 
 * File:   Devices.h
 * Author: lancelotx999
 *
 * Created on October 27, 2015, 11:30 AM
 */

#ifndef DEVICES_H
#define	DEVICES_H

#include "Battery.h"
#include "Object.h"

class Devices  : public Object
{
public:
    Devices();
    Devices(const Devices& orig);
    virtual ~Devices();
    void Connect(Battery* NewBattery);
    void Disconnect(Battery* OldBattery);
    
    Battery* GetBattery() const;
    
    virtual void DeviceFunction() = 0;
    virtual Devices* clone() const = 0;
    //virtual void Clone() = 0;
    
private:
    
//    Battery CurrentBattery;
    
protected:
    Battery* CurrentBattery;
    Object* DeviceObject;

};

#endif	/* DEVICES_H */

