/* 
 * File:   Devices.h
 * Author: lancelotx999
 *
 * Created on October 27, 2015, 11:30 AM
 */

#ifndef DEVICES_H
#define	DEVICES_H

#include "Battery.h"

class Devices {
public:
    Devices();
    Devices(const Devices& orig);
    virtual ~Devices();
    void Connect(Battery NewBattery);
    void Disconnect(Battery OldBattery);
    
private:   

    
protected:
    

};

#endif	/* DEVICES_H */

