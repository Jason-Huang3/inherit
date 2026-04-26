// Jason Huang
// CIS 1202 501
// April 26, 2026

#ifndef Vehicle_H
#define Vehicle_H 

#include <string>
using namespace std;

class Vehicle {
    private:
        string manufacturer;
        int year;
    public:
        string getManufacturer();
        int getYear();
        void setYear(int);
        void setManufacturer(string);
        Vehicle();
};

#endif