/* 
 * File:   Solar.h
 * Author: lancelotx999
 *
 * Created on October 30, 2015, 10:18 AM
 */

#ifndef SOLAR_H
#define	SOLAR_H

#include "Devices.h"

class Solar : public Devices
{
public:
    Solar();
    Solar(const Solar& orig);
    virtual ~Solar();
    
    virtual void DeviceFunction();
    
private:

};

#endif	/* SOLAR_H */

