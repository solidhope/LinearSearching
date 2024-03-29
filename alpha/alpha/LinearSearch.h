/* 
In Linear Search the list is searched sequentially and the position is returned if the key element to be searched is available in the list, otherwise -1 is returned. The search in Linear Search starts at the beginning of an array and move to the end, testing for a match at each item

All the elements preceding the search element are traversed before the search element is traversed. If the element to be searched is in position 10, all elements form 1 - 9 are checked before 10.
*/

#pragma once
#ifndef alpha_LinearSearch_h
#define alpha_LinearSearch_h

#include <iostream>
using namespace std;

int linearSearch(int a[], int search, int size) {
    
    for (int i = 0; i < size; ++i) {
        
        if (search == a[i])
            
            return i;
        
    }
    
    return -1;
}

#endif
