#pragma once
#include "BinarySearchTree.hpp"
#include <string>

class TruckInventory
{
private:
    BinarySearchTree bst;

    std::string stringparser(std::string str, int &ind, char delim = '\n');

public:
    void loadTrucks(const std::string &filename);
    void makeJourney(float distance);
    void unloadTrucks(const std::string &filename);
};