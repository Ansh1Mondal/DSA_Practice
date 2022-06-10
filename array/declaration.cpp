// array are a vector value

#include <iostream>
using namespace std;

int main()
{
    int a[5];
    int b[5] = {1, 2, 3, 4, 5};
    int c[10] = {2, 4, 5};
    int d[5] = {0};
    int e[] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 5; i++)
        cout << &a[i] << endl;

    return 0;
}

// size of an array should be decided on the complile time in C ... while it can be decided during runtime in C++
// array can be call as a[2] as well as 2[a]