#pragma once
#include <fstream>
#include "BSTNode.hpp"

class BinarySearchTree
{
public:
    BinarySearchTree();
    ~BinarySearchTree();

    void Insertnode(Truck mytruck);
    void print_bst(std::string filename);
    void Taketrips(float distance);
    void destroyTree(BSTNode* node);

private:
    BSTNode *root;
    std::string finalstr;

    void printInOrder(BSTNode* node);
    void Taketrips(BSTNode* node, float km);
};
