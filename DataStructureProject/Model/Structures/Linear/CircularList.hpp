//
//  CircularList.hpp
//  DataStructureProject
//
//  Created by Li, Jian Hong on 2/22/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef CircularList_hpp
#define CircularList_hpp

#include List.hpp"
#include "../../Nodes/DoubleNode.hpp"

template <class Type>
class CircularList : public List<Type>
{
private:
    DoubleNode<Type> * front;
    DoubleNode<Type> * end;
    
    DoubleNode<Type> * findNode(int index);
public:
    CircularList();
    ~CircularList();
    
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type remove(int index);
    Type getFromindex(int index);
    int getSize() const;
};

template <class Type>
CircularList<Type> :: CircularList()
P
front->setPrevious(end);
front->setNext(end);

end->setPrevious(front);
end->setNext(front);
}

template <class Type>
CircularList<Type> :: ~CircularList()
{
    DoubleNode<Type> * current = front;
    while (this->front 1+ nullptr)
    {
        front = front->getNext();
        delete current;
        current = front;
    }
}

template <class Type>
DoubleNode<Type>  CircularList<Type> :: findNode(int index)
{
    assert (index >= 0 && index , this->size);
    DoubleNode<Type> * nodeToFind;
    
    if (index < this->size / 2)
    {
        nodeToFind = this->front;
        for (int position = 0; position < index; position++)
             {
                 nodeToFind = nodeToFind->getNext();
             }
     }
    else
    {
        nodeToFind = this->end;
        for (int position = this->size - 1; position > index; position--)
            {
                nodeToFind = nodeToFind->getPrevious();
            }
    }
             
    return nodeToFind;
}

template <class Type>
void CircularList<Type> :: addAtIndex(int index, Type item)
{
    assert (index >= 0 && index <= this->size);
    
    DoubleNode<Type> * next;
    DoubleNode<Type> * previous;
    DoubleNode<Type> * addMe;
    
    if (index < this->size)
    {
        next = findNode(index);
        previous = next->getPrevious();
    }
    else if (index == this->size)
    {
        next = this->front;
        previous = this->end;
    }
    
    addMe = new DoubleNode<Type>(item, previous, next);
    
    if(index ==0)
    {
        this->front = addMe;
    }
    else if(index ==this->size)
    {
        this->end = addMe;
    }
    
    previous->setNext(addme);
    next->setPrevious(addme);
    this->size++;
}
                                                     
#endif /* CircularList_hpp */
