// Jason Huang
// CIS 1202 501
// April 26, 2026
#include "Vehicle.h"
#include "Car.h"
#include <iostream>
using namespace std;

int Car::getDoors() {
    return Door;
}

void Car::setDoors(int d) {
    Door = d;
}

Car::Car(string m, int y, int d) : Vehicle(m, y){
    setDoors(d);
}

void Car::displayInfo() {
    Vehicle::displayInfo();
    cout << "Doors: " << getDoors() << endl;
}