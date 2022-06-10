#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char a[7];
    char b[7];
    int i, j;

    cout << "enter the string to be reversed:" << endl;
    cin >> a;

    for (i = 0; a[i] != '\0'; i++)
    {
    }
    i = i - 1;
    for (j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }
    b[j] = '\0';
    cout << b;
    return 0;
}