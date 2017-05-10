//
//  max1s.cpp
//  Amazone
//
//  Created by krishna mali on 08/05/17.
//  Copyright © 2017 krishna mali. All rights reserved.
//

/*
 You are given a binary matrix whose each row is sorted. that means each row will have zeros at front and ones at the back. You need to find out the row which contains a maximum number of ones.
 Ex :
 
 
 [0 0 0 0 0 0 0 1 1 1 1 1]
 [0 0 0 0 1 1 1 1 1 1 1 1]
 [0 0 0 0 0 0 1 1 1 1 1 1]
 [0 0 0 0 0 0 0 0 0 1 1 1]
 [0 0 0 0 0 0 0 1 1 1 1 1]
 [0 0 0 0 1 1 1 1 1 1 1 1]
 Ans : second row and sixth with 8 ones. you will print [2,8] and [6,8];
 
 Update : Required complexity O(M+N) + O(1) only.
 */

#include "max1s.hpp"
#define R 6
#define C 12
#include <vector>
#include <iostream>
using namespace std;

void max1s()
{
    int mat[R][C]= {
        {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1},
        {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1},
        {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1}
    };
    
    int j=C-1;
    int max1=0;
    vector<int> max1rows;
    
    
    for(int i=0; i<R;++i)
    {
        while(--j >=0 && mat[i][j]==1);
        
        
        if(C-j-1>max1)
        {
            max1 = C-j-1;
            max1rows.clear();
            max1rows.push_back(i);
        }
        else if(C-j-1==max1)
            max1rows.push_back(i);
        
        
        j+=2; // get j 2 step back
    }
    
    vector<int>::iterator itr = max1rows.begin();
    while(itr != max1rows.end())
        cout<<*itr++<<" "<<max1<<endl;
}






