//
//  ArrayTester.cpp
//  DataStructureProject
//
//  Created by Li, Jian Hong on 2/6/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <iostream>
#include "../Model/Structures/Array.hpp"
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"

class ArrayTester
{
public:
    void testArrayUse();
    void testAdvancedArray();
};

void ArrayTester :: testArrayUse()
{
    Array<int> firstArray(10);
    
    for(int index = 0; index < 10; index++)
    {
        firstArray.setAtIndex(index, index);
    }
    
    for ( int index = 0; index < firstArray.getSize(); index++)
    {
        cout << firstArray[index] << endl;
    }
    
    Array<int> secondArray(400);
    
    cout << secondArray.getSize() << endl;
    cout << firstArray.getSize() << endl;
    
    Array<int> thirdArray(secondArray);
    
    cout << thirdArray.getSize() << endl;
    firstArray = thirdArray;
    cout << firstArray[4] << endl;
    
    thirdArray[5] = 123;
    cout << thirdArray[5] << endl;
}

void ArrayTester :: testAdvancedArray()
{
    vector<CrimeData> test = FileController :: readCrimeDataToVector(/Users/jli8189/Documents/C++/DataStructureProject/DataStructureProject/Data/crime.csv)
}
#endif /* ArrayTester_hpp */
