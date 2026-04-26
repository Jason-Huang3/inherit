// Jason Huang
// CIS 1202 501
// April 26, 2026
#include "Vehicle.h"
#include <iostream>
#include <iomanip>
using namespace std;

string Vehicle::getManufacturer() {
    return manufacturer;
}

int Vehicle::getYear() {
    return year;
}

void Vehicle::setYear(int y) {
    year = y;
}

void Vehicle::setManufacturer(string m) {
    manufacturer = m;
}

Vehicle::Vehicle(string m, int y) {
    setManufacturer(m);
    setYear(y);
}

void Vehicle::displayInfo() {
    cout << endl
         << "Information:" << endl
         << "Manufacturer: " << getManufacturer() << endl
         << "Year Built: " << getYear() << endl;
}