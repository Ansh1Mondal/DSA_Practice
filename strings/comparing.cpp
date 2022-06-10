#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // char a[10];
    // char b[10];

    // cout << "enter 1st string:";
    // cin >> a;
    // cout << "enter 2nd string:";
    // cin >> b;

    // int i, j, flag;

    // for (i = 0, j = 0; a[i] != '\0' && b[j] != '0'; i++, j++)
    // {
    //     if (a[i] != b[i])
    //     {
    //         flag = 0;
    //     }
    //     else
    //         flag = 1;
    // }

    // if (flag == 1)
    //     cout << "string are same.";
    // else
    //     cout << "strings are not same.";

    //************palindrome check code****************

    char c[20];
    char d[20];

    cout << "enter the string:";
    cin >> c;

    int i, j;
    for (i = 0; c[i] != '\0'; i++)
    {
    }
    i = i - 1;
    for (j = 0; i >= 0; i--, j++)
    {
        d[j] = c[i];
    }

    int flag;
    for (int m = 0; c[m] != '\0'; m++)
    {
        if (c[m] == d[m])
            flag = 1;
        else
            flag = 0;
    }

    if (flag == 1)
        cout << "palindrome";
    else
        cout << "not palindrome";

    return 0;
}
// *********IMPORTANT TOPICS**************
// 1. MASKING
// 2. ORING
// 3. ANDING
// 4. shift operators
// 5. masking