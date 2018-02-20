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
                             };
    
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
    
    void LinkedList<Type> :: add(Type item)
    {
        LinearNode<Type> * newData = new LinearNode<Type>(item);
        
        if(this->size == 0)
        {
            this->front = newData;
        }
        else
        {
            this-end->setNextNode(newData);
        }
        
        this->end = newData;
        this->size += 1;
    }
    
    void LinkedList<Type> :: addAtIndex(int index, Type item)
    {
        assert(index >= 0 && index <= this->size);
        if(index == this->size)
        {
            add(item);
        }
        else
        {
            LienarNode<Type> * toBeAdded = new LinearNOde<Type>(item);
            if (index == 0)
            {
                toBeAdded->setNextNode(front);
                front = toBeAdded;
            }
            else
            {
                LinearNode<Type> * previous = nullptr;
                LinearNode<Type> * current = front;
                for (int position = 0; position < index; position++)
                {
                    previous = current;
                    current = current->getNextNode();
                }
                previous->setNextNode(toBeAdded);
                toBeAdded->SetNextNode(current);
            }
            this->size++;
        }
        
        Type LinkedList<Type> :: getFromIndex(int index)
        {
            assert(index >= 0 && index < this->size);
            Type data;
            
            LinearNode<Type> * current = front;
            
            for (int position = 0; position < index; position++)
            {
                current = current->getNextNode();
            }
            
            data = current->getData();
            
            return data;
        }
}


#endif /* LinkedList_hpp */
