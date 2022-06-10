#include <iostream>
using namespace std;

//          { 0                    n=0
// fib(n) = { 1                    n=1
//          { fib(n-2)+fib(n-1)    n>1

/////////// normal recurion for fibonacci //////////////  (excessive recursion)

int fib(int n)
{
    if (n <= 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

/////////// iteration for fibonacci //////////////
int fib2(int n)
{
    if (n <= 1)
        return n;
    int t0 = 0, t1 = 1, s, i;
    for (i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

//  memoization =  storing the results of func calls so that we can use them later in the func
/////////// recurion for fibonacci (using memoization) //////////////

int F[10]; // global array is needed to store results
int fib3(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = fib3(n - 2);

        if (F[n - 1] == -1)
            F[n - 1] = fib3(n - 1);
        F[n] = F[n - 2] + F[n - 1]; // to store the values
        return F[n - 2] + F[n - 1];
    }
}

int main()
{
    int r;

    for (int i = 0; i < 10; i++)
    {
        F[i] = -1; // for filling the array with the unknown values i.r -1
    }

    r = fib3(6);
    cout << r;
    return 0;
}