#include <iostream>
using namespace std;

int main()
{
    char *s = "Ansh Mondal";
    int i;
    for (i = 0; &s[i] != "\0"; i++)
    {
    }
    cout << "the length is:" << i;
    return 0;
}