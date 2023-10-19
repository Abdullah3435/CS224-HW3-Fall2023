#include "BSTNode.hpp"

BSTNode::BSTNode(Truck val, BSTNode *left, BSTNode *right) : val(val),
                                                            left(left),
                                                            right(right) {}

std::string BSTNode::print_TruckData()
{
    std::string mystr;

    mystr += val.driver + '\n';
    mystr += (val.petrol == (int)val.petrol) ? std::to_string((int)val.petrol) + '\n' : std::to_string((float)val.petrol) + '\n';
    mystr += val.regNo + '\n';
    mystr += std::to_string(val.fullMileage) + '\n';
    mystr += std::to_string(val.emptyMileage) + '\n';

    return mystr;
}

void BSTNode::trip(float km)
{
    double required_petrol = km / val.emptyMileage + km / val.fullMileage;
    if (val.petrol >= required_petrol)
    {
        val.petrol -= required_petrol;
    }
}