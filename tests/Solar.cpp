/* 
 * File:   Solar.cpp
 * Author: lancelotx999
 * 
 * Created on October 30, 2015, 10:18 AM
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Solar.h"
#include "Battery.h"

using namespace std;


Solar::Solar() {
}

Solar::Solar(const Solar& orig) {
}

Solar::~Solar() {
}

void Solar::DeviceFunction()
{
    
    if(CurrentBattery->getCharge() <= 96)
    {
        CurrentBattery->setCharge(4);
        
//        cout << endl << "Charging" << endl;
    }
    else
    {
//        cout << endl << "Fully Charged" << endl;
    }
    
}

