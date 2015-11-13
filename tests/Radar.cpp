/* 
 * File:   Radar.cpp
 * Author: lancelotx999
 * 
 * Created on October 26, 2015, 12:33 PM
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Radar.h"
#include "Battery.h"

using namespace std;

Radar::Radar() {
}

Radar::Radar(const Radar& orig) {
}

Radar::~Radar() {
}

//void Radar::RadarFunction()
//{
//    srand(time(NULL));
//    
//    int Chance = rand() % 100 + 1;
//    
//    
//    if(Chance >= 25)
//    {
//        cout << "PING" << endl;
//    }
//    else
//    {
//        cout << "PONG" << endl;
//    }
//    
//}

void Radar::DeviceFunction()
{
    srand(time(NULL));
    
    int Chance = rand() % 100 + 1;
    
    if(CurrentBattery->getCharge() >= 4)
    {
        CurrentBattery->setCharge(-4);
        
        if(Chance >= 25)
        {
//            cout << endl << "PING" << endl;
        }
        else
        {
//            cout << endl << "PONG" << endl;
        }
    }
    
}

Devices* Radar::clone() const
{
    return new Radar(*this);
}

