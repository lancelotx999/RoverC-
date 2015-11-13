/* 
 * File:   Battery.h
 * Author: lancelotx999
 *
 * Created on October 27, 2015, 11:13 AM
 */

#ifndef BATTERY_H
#define	BATTERY_H

#include "Object.h"

class Battery : public Object 
{
public:
    Battery();
    Battery(const Battery& orig);
    virtual ~Battery();
    int getCharge() const;
    void setCharge(int AddCharge);
    
private:
    int Charge;
    Object* BatteryObject;

};

#endif	/* BATTERY_H */

