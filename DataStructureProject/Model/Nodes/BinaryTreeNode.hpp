//
//  BinaryTreeNode.hpp
//  DataStructureProject
//
//  Created by Li, Jian Hong on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include <iostream>

template <class Type>
class BinaryTreeNode :: public Node<Type>
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
    BinaryTreeNode<Type> * getRoot();
    BinaryTreeNode<Type> * getLeft();
    BinaryTreeNode<Type> * getRight();
    
    void setRootNode(BinaryTreeNode<Type> * root);
    void setLeftNode(BinaryTreeNode<Type> * left);
    void setRightNode(BinaryTreeNode<Type> * right);
};

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data)
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template <class Type>
void  BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * root)
{
    this->root = root;
}

template <class Type>
void BinaryTreeNode<Type> :: setLeftNode(BinaryTreeNode<Type> *left)
{
    this->left = left;
}
template <class Type>
void  BinaryTreeNode<Type> :: setRightNode(BinaryTreeNode<Type> * right)
{
    this->right = right;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode()
{
    return this->root;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftNode()
{
    return this->left;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightNode()
{
    return this->right;
}

#endif /* BinaryTreeNode_hpp */
