// to store memory in heap instead of stack we have to allocate it and access it indirectly using pointers
// stack array cannot be resized ... heap also can not resized but there are ways
// the ways are creating another bigger size array and transfer all the data to the new one

#include <iostream>
using namespace std;

int main()
{
    int a[5] = {2, 4, 6, 8, 10}; // array in stack
    int *p;
    int i;
    p = new int[5]; // array in heap
    // p = (int*)malloc(5*sizeof(int))   -- this is how dynamic array in C is syntaxed

    int *q = new int[10]; // for increasing operation of array size
    for (int j = 0; j < 5; j++)
        q[i] = p[i]; // this is how the size of array is increased on heap
    // alse delete unused memory to prevent memory leak
    delete[] p;
    p = q;
    q = NULL; // pointers are changed

    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    for (i = 0; i < 5; i++)
        cout << a[i];
    cout << endl;
    for (i = 0; i < 5; i++)
        cout << p[i];

    return 0;
}