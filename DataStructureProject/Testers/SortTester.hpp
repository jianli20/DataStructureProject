//
//  SortTester.hpp
//  DataStructureProject
//
//  Created by Li, Jian Hong on 3/13/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef SortTester_hpp
#define SortTester_hpp

#include <iostream>
#include "/Users/jli8189/Documents/C++/DataStructureProject/DataStructureProject/Controller/FileController.hpp"
#include "/Users/jli8189/Documents/C++/DataStructureProject/DataStructureProject/Controller/Tools/Timer.hpp"


using namespace std;

class SortTester
{
private:
    int swapCount;
    void quickSort(vector<CrimeData> & data, int low, int high);
    int partition(vector<CrimeData> & data, int low, int high);
    void swap(vector<CrimeData> & data, int low, int high);
public:
    void testSorts();
};

#endif /* SortTester_hpp */
