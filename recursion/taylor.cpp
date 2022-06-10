#include <iostream>
using namespace std;

// Taylor series e^x = 1 + x/1 + x^2/2! + x^3/3! ... n terms

/////////// normal recurion for taylor series //////////////
double e(int x, int n) // x= power of e and n is no. of terms
{
    static double p = 1, f = 1;
    double r;

    if (n == 0)
        return 1;
    r = e(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}
/////////// hroner's rule recurion for taylor series //////////////
double e2(int x, int n)
{
    static double s = 1;

    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return e2(x, n - 1);
}

/////////// loop for taylor series //////////////

double e3(int x, int n)
{
    double s = 1;
    int i;
    double num = 1, den = 1;

    for (i = 1; i <= n; i++)
    {
        num *= x;
        den *= i;
        s += num / den;
    }
    return s;
}

int main()
{
    cout << e3(1, 10);
    return 0;
}

////// *** This needs to be revised again *** //////
////// *** Very important *** //////