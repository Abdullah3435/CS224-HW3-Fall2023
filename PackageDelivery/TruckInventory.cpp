#include "TruckInventory.hpp"
#include <iostream>
#include <fstream>

std::string TruckInventory::stringparser(std::string str, int &ind, char delim)
{
    std::string tempstr;
    while (str[ind] != delim)
    {
        tempstr += str[ind++];
    }
    ind++;
    return tempstr;
}

void TruckInventory::loadTrucks(const std::string &filename)
{
    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open input file " << filename << std::endl;
    }

    int ind = 0;
    std::string driver, regNo;
    double petrol;
    int fullMileage, emptyMileage;

    std::string tempstr;
    int linenum = 1;

    while (std::getline(inputFile, tempstr))
    {
        switch (linenum)
        {
            case (1):
            {
                driver = tempstr;
                break;
            }
            case (2):
            {
                petrol = std::stod(tempstr);
                break;
            }
            case (3):
            {
                regNo = tempstr;
                break;
            }
            case (4):
            {
                fullMileage = std::stoi(tempstr);
                break;
            }
            case (5):
            {
                emptyMileage = std::stoi(tempstr);
                break;
            }
            default:
                break;
        }

        if (linenum >= 5)
        {
            linenum = 1;
            Truck mytruck(driver, petrol, regNo, fullMileage, emptyMileage);
            bst.Insertnode(mytruck);
        }
        else
            linenum++;
    }
}

void TruckInventory::makeJourney(float distance)
{
    bst.Taketrips(distance);
}

void TruckInventory::unloadTrucks(const std::string &filename)
{
    bst.print_bst(filename);
}
