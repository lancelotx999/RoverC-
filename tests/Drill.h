/* 
 * File:   Drill.h
 * Author: lancelotx999
 *
 * Created on October 30, 2015, 10:57 AM
 */

#ifndef DRILL_H
#define	DRILL_H

#include "Devices.h"

class Drill : public Devices
{
public:
    Drill();
    Drill(const Drill& orig);
    virtual ~Drill();
    
    void SetSafety(int SafetySetting);
    
    virtual void DeviceFunction();
    
private:
    
    int SafetySwitch;

};

#endif	/* DRILL_H */

