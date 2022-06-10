#include <iostream>
using namespace std;

struct matrix
{
    int A[10];
    int n;
};

void set(struct matrix *m, int i, int j, int x)
{
    if (i == j)
        m->A[i - 1] = x;
}

int get(struct matrix m, int i, int j)
{
    if (i == j)
        return m.A[i - 1];
    else
        return 0;
}

void display(struct matrix m)
{
    int i, j;
    for (i = 0; i <= m.n; i++)
    {
        for (j = 0; j <= m.n; j++)
        {
            if (i == j)
                cout << m.A[i] << " ";
            else
                cout << "0 ";
        }
        cout << "\n";
    }
}

int main()
{

    struct matrix m;
    m.n = 4;

    set(&m, 1, 1, 5);
    set(&m, 2, 2, 10);
    set(&m, 3, 3, 15);
    set(&m, 4, 4, 20);
    set(&m, 5, 5, 25);

    cout << get(m, 3, 3) << endl;

    display(m);

    return 0;
}