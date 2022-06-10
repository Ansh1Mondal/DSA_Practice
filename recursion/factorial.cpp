#include <iostream>
using namespace std;

///////////// using recurion ////////////////
// int fact(int n)
// {
//                                    // formula
//                                    // fact (n) = 1*2*3*....*(n-1)*n
//                                    // fact (n) = fact (n-1)*n
//     if (n == 0)
//         return 1; // factorial of 0 is 1
//     else
//         return fact(n - 1) * n;
// }

// int main()
// {
//     int r;
//     r = fact(5);
//     cout << r;
//     return 0;
// }

///////////// using loop ////////////////

int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int f;
    f = fact(5);
    cout << f;
    return 0;
}