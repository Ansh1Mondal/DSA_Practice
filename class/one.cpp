#include <iostream>
using namespace std;

class add
{
public:
    int a, b;
    int sum(int x, int y)
    {
        return x + y;
    }
};

int main()
{

    int m = 3, n = 2;
    add S;
    S.a = m;
    S.b = n;
    int ans = S.sum(S.a, S.b);
    cout << "the sum is:" << ans;

    return 0;
}