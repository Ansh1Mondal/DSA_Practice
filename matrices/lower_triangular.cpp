// CONDITION FOR LOWER TRIANGULAR MATRIX =  M[i,j]=0 if i<j      and     M[i,j]= non zero if i>=j
// there are two ways of doing this one is row major form second is column major form
#include <iostream>
using namespace std;

struct matrix
{
    int *A; //        as we don't know the size of matrix s0 let declare it dynamically
    int n;
};

void set(struct matrix *m, int i, int j, int x)
{
    if (i >= j)
        m->A[i * (i - 1) / 2 + j - 1] = x;
}

int get(struct matrix m, int i, int j)
{
    if (i >= j)
        return m.A[i * (i - 1) / 2 + j - 1];
    else
        return 0;
}

void display(struct matrix m)
{
    int i, j;
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            if (i >= j)
                cout << m.A[i * (i - 1) / 2 + j - 1] << " ";
            else
                cout << "0 ";
        }
        cout << "\n";
    }
}

int main()
{
    struct matrix m;
    int i, j, x;
    cout << "enter the dimension";
    cin >> m.n;
    m.A = new int(m.n * (m.n + 1) / 2);

    cout << "enter all elements" << endl;
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            cin >> x;
            set(&m, i, j, x);
        }
    }
    cout << "\n\n";
    display(m);

    return 0;
}