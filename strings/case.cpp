// ASCII codes of upper case and lower case have the difference of 32
#include <iostream>
#include <conio.h>
// #include<stdio.h>
using namespace std;

int main()
{
    char S[] = "AnSh";
    int i;
    for (i = 0; S[i] != '\0'; i++)
    {
        if (S[i] >= 65 && S[i] <= 90)
            S[i] += 32;
        else if (S[i] >= 'a' && S[i] <= 122) // THESE ARE ASCII CODES FOR ALPHABETS FOR BOTH CAPITAL AND SMALL
            S[i] -= 32;
    }
    cout << "string:" << S << endl;

    // counting the vowels

    char a[] = "How are you";
    int j, vowelsC = 0;
    for (j = 0; a[j] != '\0'; j++)
    {
        if (a[j] == 'a' || a[j] == 'e' || a[j] == 'i' || a[j] == 'o' || a[j] == 'u' || a[j] == 'A' || a[j] == 'E' || a[j] == 'I' || a[j] == 'O' || a[j] == 'U')
            vowelsC++;
    }
    cout << "The no. of vowels are:" << vowelsC;

    return 0;
}