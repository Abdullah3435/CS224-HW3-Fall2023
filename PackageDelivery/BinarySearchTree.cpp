#include "BinarySearchTree.hpp"

BinarySearchTree::BinarySearchTree()
{
    root = nullptr;
}

BinarySearchTree::~BinarySearchTree()
{
    destroyTree(root);
}

void BinarySearchTree::Insertnode(Truck mytruck)
{
    BSTNode *temproot = root;
    BSTNode *Node = new BSTNode(mytruck, nullptr, nullptr);

    if (root == nullptr)
    {
        root = Node;
    }

    while (temproot != nullptr)
    {
        if (mytruck.regNo > temproot->val.regNo)
        {
            if (temproot->right == nullptr)
            {
                temproot->right = Node;
                break;
            }
            temproot = temproot->right;
        }
        else
        {
            if (temproot->left == nullptr)
            {
                temproot->left = Node;
                break;
            }
            temproot = temproot->left;
        }
    }
}

void BinarySearchTree::print_bst(std::string filename)
{
    std::ofstream outputFile(filename);
    finalstr = "";
    printInOrder(root);
    outputFile << finalstr;
}

void BinarySearchTree::Taketrips(float distance)
{
    Taketrips(root, distance);
}

void BinarySearchTree::printInOrder(BSTNode* node)
{
    if (node == nullptr)
    {
        return;
    }

    // Recursively print the left subtree
    printInOrder(node->left);

    // Print the current node's value
    finalstr += node->print_TruckData();

    // Recursively print the right subtree
    printInOrder(node->right);
}

void BinarySearchTree::Taketrips(BSTNode* node, float km)
{
    if (node == nullptr)
    {
        return;
    }

    // Recursively traverse left subtree
    Taketrips(node->left, km);

    // take trips
    node->trip(km);

    // Recursively traverse RIGHT subtree
    Taketrips(node->right, km);
}

void BinarySearchTree::destroyTree(BSTNode* node)
{
    if (node == nullptr)
    {
        return;
    }

    // Recursively delete the left subtree
    destroyTree(node->left);
    delete node;
    // Recursively delete the right subtree
    destroyTree(node->right);

    // Delete the current node
}
