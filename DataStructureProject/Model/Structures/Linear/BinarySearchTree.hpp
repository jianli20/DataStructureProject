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
class BinarySearchTree<Type> : public Tree<Type>
{
protected:
    //Recursive Info Helpers
    int calculateSize(BinarySearchTree<Type>  * startNode)
    int calculateHeight(BinarySearchTree<Type>  * startNode)
    bool isBalanced(BinarySearchTree<Type>  * startNode)
    bool isComplete(BBinarySearchTree<Type> * startNode, int index, int size)
    //Recursive Data Members
    void removeNode(BBinarySearchTree<Type> * removeMe)
    //Recursive Traversal Helpers
    void inOrderTraversal(BinarySearchTree<Type> * inStart)
    void preOrderTraversal(BinarySearchTree<Type> * preStart)
    void postOrderTraversal(BinarySearchTree<Type> * postStart)
    BinarySearchTree<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinarySearchTree<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
public:
    //Structure
    BinarySearchTree();
    ~BinarySearchTree();
    //Informational Methods
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    BinaryTree<Type> * getRoot();
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
    void demoTraversalSteps(BinarySearchTree<Type> * node);
};

template <class Type>
int BinarySearchTree<Type> :: calculateSize(BinarySearchTree<Type> * startNode)
{

}

template <class Type>
int BinarySearchTree<Type> :: calculateHeight(BinarySearchNode<Type> * startNode)
{
    
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced(BinarySearchNode<Type> * startNode)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: removeNode(BinarySearchNode<Type> * removeMe)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinarySearchNode<Type> * instart)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversalBinarySearchNode<Type> * prestart)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinarySearchNode<Type> * postStart)
{
    
}

template <class Type>
BinarySearchTree<Type> * getRightMostChild(BinarySearchTree<Type> * current);
{
    
}

template <class Type>
BinarySearchTree<Type> :: * getLeftMostChild(BinarySearchTree<Type> * current);
{
    
}

template <class Type>
BinarySearchTree<Type> :: BinarySearchTree()
{
    
}

template <class Type>
BinarySearchTree<Type> :: ~BinarySearchTree()
{
    
}

template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    
}

template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    
}

template <class Type>
BinaryTree<Type> * getRoot()
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
    
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: demoTraversalSteps(BinarySearchTree<Type> * node)
{
    
}

#endif /* BinarySearchTree_hpp */
