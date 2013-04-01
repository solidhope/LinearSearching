#pragma once
#include <iostream>
#include "LinearSearch.h"
using namespace std;

int main()
{
    
    int size = 10;
    int a[10] = { 10, 9, 3, 6, 7, 2, 1, 5, 4, 8 };
    int searchValue = 6;
    
    cout << linearSearch(a, searchValue, size) << endl << endl;
    
    system("pause");
    return 0;
}
