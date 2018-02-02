//
//  Controller.cpp
//  DataStructureProject
//
//  Created by Li, Jian Hong on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"


using namespace std;

void Controller :: start()
{
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "wow code" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    codeTimer.resetTimer();
    codeTimer.startTimer();
  
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/jli8189/Documents/C++/DataStructureProject/DataStructureProject/Data/crime.csv");
    
    for (int index = 200; index < 216; index ++)
    {
        cout << index << " is " << myData[index] <<endl;
    }
    
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}

void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/jli8189/Documents/C++/DataStructureProject/DataStructureProject/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 1; index < myData.size(); index++)
    {
        if (myData [minIndex] > myData [index])
        {
            minIndex = index;
        }
        
        if (myData [maxIndex] < myData[index])
        {
            maxIndex = index;
        }
    }
    searchTimer.stopTimer();
    cout << "The smallest Crime stat is at " << minIndex << " and it is:" << myData[minIndex] << endl;
    cout << "The largest Crime stat is at " << maxIndex << " and it is:" << myData[maxIndex] << endl;
    searchTimer.displayInformation();
}
