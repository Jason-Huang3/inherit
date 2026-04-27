// Jason Huang
// CIS 1202 501
// April 26, 2026
#include "Vehicle.h"
#include "Truck.h"
#include <iostream>
#include <iomanip>
using namespace std;

float Truck::getTowPower() {
    return tow;
}

void Truck::setTowPower(float t) {
    tow = t;
}

Truck::Truck(string m, int y, float t) : Vehicle(m, y) {
    setTowPower(t);
}

void Truck::displayInfo() {
    Vehicle::displayInfo();
    cout << fixed << setprecision(2) 
         << "Towing Capacity: " << getTowPower() << endl;
}