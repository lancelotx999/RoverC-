/* 
 * File:   Battery.h
 * Author: lancelotx999
 *
 * Created on October 27, 2015, 11:13 AM
 */

#ifndef BATTERY_H
#define	BATTERY_H

class Battery {
public:
    Battery();
    Battery(const Battery& orig);
    virtual ~Battery();
    int getCharge() const;
    void setCharge(int AddCharge);
    
private:
    int Charge;

};

#endif	/* BATTERY_H */

