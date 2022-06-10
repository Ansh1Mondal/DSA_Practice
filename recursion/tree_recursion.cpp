#include <iostream>
using namespace std;

// void fun(int n)
// {
//     if (n > 0)
//     {
//         cout << n << " ";       // **TREE RECURSION** is a type of recursion in which fun is called inside a fun more than one time
//         fun(n - 1);
//         fun(n - 1);
//     }
// }

// int main()
// {
//     fun(3);
//     return 0;
// }
//////////////////////////////////////

void funB(int n); //to not get the error of decleration of func after being used

void funA(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        funB(n - 1);
    }
}

void funB(int n) // **INDIRECT RECURSION** is a type of recursion in which func is called indirectly
{                // in other func i.e funA calls funB and funB again calls funA
    if (n > 1)
    {
        cout << n << " ";
        funA(n / 2);
    }
}

int main()
{
    funA(30);
    return 0;
}