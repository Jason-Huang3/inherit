// Jason Huang
// CIS 1202 501
// April 26, 2026
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
using namespace std;

int main() {
    string m;
    int y;
    int d;
    int t;
    cout << "Vehicle: " << endl;
    cout << "Manufacturer: ";
    getline(cin, m);
    cout << "Year Built: ";
    cin >> y;
    cout << endl;

    Vehicle Normal(m, y);
    Normal.displayInfo();
    cout << endl << endl;

    cout << "Car: " << endl;
    cout << "Manufacturer: ";
    cin.ignore();
    getline(cin, m);
    cout << "Year Built: ";
    cin >> y;
    cout << "Doors: ";
    cin >> d;
    cout << endl;

    Car car(m, y, d);
    car.displayInfo();
    cout << endl << endl;

    cout << "Truck: " << endl;
    cout << "Manufacturer: ";
    cin.ignore();
    getline(cin, m);
    cout << "Year Built: ";
    cin >> y;
    cout << "Towing Capacity: ";
    cin >> t;
    cout << endl;

    Truck truck(m, y, t);
    truck.displayInfo();
}