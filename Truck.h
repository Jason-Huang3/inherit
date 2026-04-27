// Jason Huang
// CIS 1202 501
// April 26, 2026

#ifndef Truck_H
#define Truck_H 

#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle {
    private:
        int tow;
    public:
        int getTowPower();
        void setTowPower(int);
        Truck(string, int, int);
        void displayInfo();
};

#endif