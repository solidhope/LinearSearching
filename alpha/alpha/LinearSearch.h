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
