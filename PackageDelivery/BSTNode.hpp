#pragma once
#include "Truck.hpp"
#include <string>

class BSTNode
{
public:
    Truck val;
    BSTNode *left;
    BSTNode *right;

    BSTNode(Truck val, BSTNode *left, BSTNode *right);

    std::string print_TruckData();
    void trip(float km);
};
