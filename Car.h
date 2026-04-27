// Jason Huang
// CIS 1202 501
// April 26, 2026

#ifndef Car_H
#define Car_H 

#include "Vehicle.h"
using namespace std;

class Car : public Vehicle {
    private:
        int Door;
    public:
        int getDoors();
        void setDoors(int);
        Car(string, int, int);
        void displayInfo();
};

#endif