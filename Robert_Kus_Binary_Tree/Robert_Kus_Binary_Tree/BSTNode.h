// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.

// This is the file to include for access to the complete binary node
// template implementation

#include "book.h"
#include "BinNode.h"

#ifndef BSTNODE_H
#define BSTNODE_H

// Simple binary tree node implementation
template <typename Key, typename E>
class BSTNode : public BinNode<E> {
private:
    Key k;                    // The node's key
    E it;                     // The node's value
    BSTNode* lc;              // Pointer to left child
    BSTNode* rc;              // Pointer to right child
    unsigned int isRightThreaded;     // Value is true if right pointer is threaded and false if it's regular
    unsigned int isLeftThreaded;      // Value is true if left pointer is threaded and false if it's regular

public:
    // Two constructors -- with and without initial values
    BSTNode() { lc = rc = NULL; }
    BSTNode(Key K, E e, BSTNode* l = NULL, BSTNode* r = NULL)
    {
        k = K; it = e; lc = l; rc = r; isLeftThreaded = 0; isRightThreaded = 0;
    }
    ~BSTNode() {}             // Destructor

    // Functions to set and return the value and key
    E& element() { return it; }
    void setElement(const E& e) { it = e; }
    Key& key() { return k; }
    void setKey(const Key& K) { k = K; }

    // Functions to set and return the children
    inline BSTNode* left() const { return lc; }
    void setLeft(BinNode<E>* b) { lc = (BSTNode*)b; }
    inline BSTNode* right() const { return rc; }
    void setRight(BinNode<E>* b) { rc = (BSTNode*)b; }

    // Return true if it is a leaf, false otherwise
    bool isLeaf() { return (lc == NULL) && (rc == NULL); }

    //Left/Right Setters to set if the pointer is a thread or regular pointer
    void setLeftThreaded() { isLeftThreaded = lc != NULL; }           //Sets isLeftThreaded based on if lc is not null
    void setRightThreaded() { isRightThreaded = rc != NULL; }         //Sets isRightThreaded based on if rc is not null

    //Left/Right Getters to return true if the pointer is a thread and false if it is regular
    int getLeftThreaded() { return isLeftThreaded; }  
    int getRightThreaded() { return isRightThreaded; }
};

#endif