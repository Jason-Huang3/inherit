// Jason Huang
// CIS 1202 501
// April 26, 2026
#include "Vehicle.h"
#include "Truck.h"
#include <iostream>
using namespace std;

int Truck::getTowPower() {
    return tow;
}

void Truck::setTowPower(int t) {
    tow = t;
}

Truck::Truck(string m, int y, int t) : Vehicle(m, y) {
    setTowPower(t);
}

void Truck::displayInfo() {
    Vehicle::displayInfo();
    cout << "Towing Capacity: " << getTowPower() << endl;
}