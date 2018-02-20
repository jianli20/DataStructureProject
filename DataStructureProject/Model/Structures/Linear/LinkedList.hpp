//
//  LinkedList.hpp
//  DataStructureProject
//
//  Created by Li, Jian Hong on 2/20/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "List.hpp"

using namespace std;

#ifndef LinkedList_hpp
#define LinkedList_hpp

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    //Constructors
    LinkedList();
    //Destructor
    virtual ~LinkedList(); // Virtual so it can be overriden
    //Helper methods
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    //Structure Methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
    // Type setAtIndex(int index, Type item);
    // bool contains(Type item);
    
    LinkedList<Type> :: LinkedList()
    {
        this->front = nullptr;
        this->end = nullptr;
        this->size = 0;

    }
    
    LinkedList<Type> :: ~LinkedList()
    {
        LinearNode<Type> * destroyStructure = front;
        while (front != nullptr)
        {
            front = destroyStructure->getNextNode();
            delete destroyStructure;
            destroyStructure = front;
        }
    }
    
    
}


#endif /* LinkedList_hpp */
