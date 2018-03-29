//
//  BinarySearchTree.hpp
//  DataStructureProject
//
//  Created by Li, Jian Hong on 3/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <iostream>
#include "Tree.hpp"
using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    //Recursive Info Helpers
    int calculateSize(BinaryTreeNode<Type>  * startNode);
    int calculateHeight(BinaryTreeNode<Type>  * startNode);
    bool isBalanced(BinaryTreeNode<Type>  * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    //Recursive Data Members
    void removeNode(BinaryTreeNode<Type> * removeMe);
    //Recursive Traversal Helpers
    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
public:
    //Structure
    BinarySearchTree();
    ~BinarySearchTree();
    //Informational Methods
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    BinaryTreeNode<Type> * getRoot();
    void setRoot(BinarySearchTree<Type> * root);
    //Data Methods
    void insert(Type);
    bool contains(Type);
    void remove(Type);
    Type findMinimum();
    Type findMaximum();
    //Traversals
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    void demo();
};


template <class Type>
BinarySearchTree<Type> :: BinarySearchTree()
{
    this->root = nullptr;
}

template <class Type>
int BinarySearchTree<Type> :: calculateSize(BinaryTreeNode<Type> * startNode)
{

}

template <class Type>
int BinarySearchTree<Type> :: calculateHeight(BinaryTreeNode<Type> * startNode)
{
    
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced(BinaryTreeNode<Type> * startNode)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: removeNode(BinaryTreeNode<Type> * removeMe)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal
{
    preOrderTraversal(this->root);
}
template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal
{
    postOrderTraversal(this->root);
}

template <class Type>
BinarySearchTree<Type> :: ~BinarySearchTree()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinaryTreeNode<Type> * inStart)
{
    if(inStart != nullptr)
    inOrderTraversal(inStart->getLeftNode());
    cout << inStart->getData() << endl;
    inOrderTraverasl(inStart->getRightNode());
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinaryTreeNode<Type> * preStart)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinaryTreeNode<Type> * postStart)
{
    
}

template <class Type>
BinaryTreeNode<Type> * BinarySearchTree<Type> :: getRightMostChild(BinaryTreeNode<Type> * current)
{
    
}

template <class Type>
BinaryTreeNode<Type> * BinarySearchTree<Type> :: getLeftMostChild(BinaryTreeNode<Type> * current)
{
    
}

template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    return -1;
}

template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return false;
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    return false;
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return false;
}

template <class Type>
BinaryTreeNode<Type> * BinarySearchTree<Type> :: getRoot()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: setRoot(BinarySearchTree<Type> *  root)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type)
{
    
}

template <class Type>
bool BinarySearchTree<Type> :: contains(Type)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: remove(Type)
{
    
}

template <class Type>
Type findMinimum()
{
    
}

template <class Type>
Type findMaximum()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    inOrderTraversal(this->root);
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinaryTreeNode<Type> * inStart)
{
    if(inStart != nullptr)
    {
        inOrderTraversal(inStart->getLeftNode());
        cout << inStart->getdata() << endl;
        inOrderTraversal(inStart->getRightNode());
    }
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinaryTreeNode<Type> * preStart)
{
    [ if(preStart != nullptr)
     {
     cout << preStart->getdata() << endl;
     preOrderTraversal(preStart->getLeftNode());
     preOrderTraversal(reStart->getRightNode());
     }
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinaryTreeNode<Type> * postStart)
{
    if(postStart != nullptr)
    {
        cout << inStart->getdata() << endl;
        postOrderTraversal(postStart->getLeftNode());
        postOrderTraversal(postStart->getRightNode());
}

template <class Type>
BinaryTreeNode<Type> * BinarySearchTree<Type> :: demo()
{
        demoTraversalSteps(this->root);
}
    
template <class Type>
void BinarySearchTree<Type> :: demoTraversalSteps(BinaryTreeNode<Type> * start)
{
    if(start != nullptr)
    {
        cout << "check if left is here" << endl;
        demoTraversalSteps(start->getleftNode());
        cout << "at root" << endl;
        cout << "check if right is here" << endl;
        demoTraversalSteps(start->getRight());
    }
    else
    {
        cout << "reached nullptr - if on right its back up on the recursive call stack" << endl;
    }
}

#endif /* BinarySearchTree_hpp */
