#pragma once
#include <string>

struct Truck
{
    std::string driver;
    double petrol;
    std::string regNo;
    int fullMileage;
    int emptyMileage;

    // Constructor
    Truck(std::string driver_, double petrol_, std::string regNo_, int fullMileage_, int emptyMileage_);
    
    
};