//
//  LinearNode.cpp
//  DataStructureProject
//
//  Created by Li, Jian Hong on 2/6/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "LinearNode.hpp"
#include "Node.hpp"

template <class Type>
class LinearNode : public Node<Type>
{
protected:
    LinearNode<Type> * next;
public:
    //Constructors
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    //Methods
    void setNextNode (LinearNode<Type> * next); LinearNode<Type> * getNextNode();
};
