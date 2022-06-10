#include <iostream>
using namespace std;

///////////// using recurion ////////////////
int pow(int m, int n)
{
    // 2^5 = 2*2*2*2*2  4 times 2 * one more 2
    // m^n = m*m*m*m*m  i.e
    // in c++ = pow(m,n)=(m*m*m*....*n-1 times)*m as mentioned above
    //        = pow(m,n)=pow(m,n-1)*m

    if (n == 0)
        return 1;
    else
        return pow(m, n - 1) * m;
}
///////////// using recurion (that has less multiplication) ////////////////
int pow2(int m, int n)
{
    // 2^8 = (2*2)^4 this way we can make multiplication shorter when power is even
    // 2^9 = 2*(2)^4 this way we can make multiplication shorter when power is odd
    // i.e odd = (m*m)^n-1/2  ..... even = m*(m)^n/2

    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return pow2(m * m, n / 2);
    else
        return m * pow2(m * m, n - 1 / 2);
}

///////////// using iteration (loops) ////////////////

int pow3(int m, int n)
{
    int i, s = 1;
    for (i = 1; i <= n; i++)
    {
        s = m * pow3(m, n - 1);
    }
    return s;
}

int main()
{
    int r;
    r = pow3(2, 5);
    cout << r;
    return 0;
}