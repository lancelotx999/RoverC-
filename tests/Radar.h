/* 
 * File:   Radar.h
 * Author: lancelotx999
 *
 * Created on October 26, 2015, 12:33 PM
 */

#ifndef RADAR_H
#define	RADAR_H

#include "Devices.h"

class Radar : public Devices
{
public:
    Radar();
    Radar(const Radar& orig);
    virtual ~Radar();
    
    virtual void DeviceFunction();
    virtual Radar Clone();
    
//    void RadarFunction();
private:
    

};

#endif	/* RADAR_H */

