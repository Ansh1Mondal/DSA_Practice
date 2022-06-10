#include <iostream>
using namespace std;

///////////// using recurion ////////////////

// int sum(int n)              // maths formula sum(n)=1+2+3+4...+n
// {                           //              =sum(n)=1+2+3+4....(n-1)+n
//     if (n == 0)             //              =sum(n)=sum(n-1)+n          i.e used as recursion func
//         return 0;
//     else
//         return sum(n - 1) + n;
// }

// int main()
// {
//     int r;
//     r = sum(5);
//     cout << r;
//     return 0;
// }

///////////// using loop ////////////////

int sum(int n)
{
    int s = 0, i;

    for (i = 1; i <= n; i++)
    {
        s = s + i;
    }
    return s;
}

int main()
{
    int r;
    r = sum(5);
    cout << r;
    return 0;
}