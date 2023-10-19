#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include "TruckInventory.hpp"

int main()
{
    TruckInventory truckInventory;

    truckInventory.loadTrucks("Input.txt");
    truckInventory.makeJourney(60.0);
    truckInventory.unloadTrucks("Trip.txt"); // to avoid intermixing of trip txt file with
    return 0;
}
