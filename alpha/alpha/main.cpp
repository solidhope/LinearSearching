#include <iostream>
using namespace std;

int linearSearch(int a[], int search, int size) {
    
    for (int i = 0; i < size; ++i) {
        
        if (search == a[i])
            
            return i;
        
    }
    
    return -1;
}

int main()
{
    
    int size = 10;
    int a[10] = { 10, 9, 3, 6, 7, 2, 1, 5, 4, 8 };
    int searchValue = 6;
    
    cout << linearSearch(a, searchValue, size) << endl << endl;
    
    system("pause");
    return 0;
}
