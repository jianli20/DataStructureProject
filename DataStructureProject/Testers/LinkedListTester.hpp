//
//  LinkedList.hpp
//  DataStructureProject
//
//  Created by Li, Jian Hong on 2/20/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef LinkedListTester_hpp
#define LinkedListTester_hpp

#include "../Model/Structures/Linear/LinkedList.hpp"
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"
#include "../Data/CrimeData.hpp"
#include <iostream>

class LinkedListTester
{
public:
    void testListBasics();
    void testListString();
    void testListWithData();
};

#endif /* LinkedList_hpp */
