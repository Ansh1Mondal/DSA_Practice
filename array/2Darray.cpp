#include <iostream>
using namespace std;

int main()
{
    // different ways to implement array in the stack and heaps

    ///////// 1st method /////////
    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {3, 5, 7, 9}}; // this will be in stack fully
    int i, j;
    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 4; j++)
    //         cout << A[i][j] << " ";
    //     cout << endl;
    // }

    ///////// 2nd method /////////
    int *B[3]; // this will be in heap but row in stack
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];
    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 4; j++)
    //         cout << B[i][j] << " ";
    //     cout << endl;
    // }

    ///////// 3rd method /////////
    int **C;           // double pointer
    C = new int *[3];  // in C lang :- C = (int **)malloc(3*sizeof(int *));
    C[0] = new int[4]; //  this will be in heap both rows and column
    C[1] = new int[4];
    C[2] = new int[4];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}