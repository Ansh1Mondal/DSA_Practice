#include <iostream>
using namespace std;

// nCr = n! / r! (n-r)!
// combination formula                                            1 (0 C 0)
//                                                               / \
//                                                      (1 C 0) 1   1 (1 C 1)
//                                                             / \ / \
//                                                    (2 C 0) 1   2   1 (2 C 2)  ... and so on this is pascal's triangle
//                                                             (2 C 1)

/////////// iteration for nCr //////////////
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return fact(n - 1) * n;
}

int nCr(int n, int r)
{
    int num, den;
    num = fact(n);

    den = fact(r) * fact(n - r);

    return num / den;
}
/////////// recursion for nCr //////////////
int NCR(int n, int r)
{
    if (n == r || r == 0)
        return 1;
    else
        return NCR(n - 1, r - 1) + NCR(n - 1, r);
}

int main()
{
    cout << NCR(5, 2);
    return 0;
}