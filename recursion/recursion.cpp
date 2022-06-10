#include <iostream>
using namespace std;

// void fun(int num)
// {
//     if (num > 0)
//     {

//         cout << num << " ";
//         fun(num - 1);
//     }
// }

// int main()
// {

//     int x;
//     cin >> x;

//     fun(x);
//     return 0;
// }
/////////////////////////////////////////////
int x = 0; // Global Variable
int fun(int n)
{
    //static int x = 0; // Static variable
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x; // If this statement is at last then it is called tail recursion i.e. the last statement of the function
    }                          // and no other statement to be executed after that. And if the fun() is called before that any line that
    return 0;                  // is executed then it is a head recursion i.e. it will run after the calling of fun i.e returning time
                               //and not the last line. In the given case it is head recursion because after fun() there is an operator
} //                             which will work at returning time.
  //                            There is nothing above the fun() in the head recursion if there is something then is it just a recursion
int main() //                     no need to specify it with the name.
{
    int a = 5;
    cout << fun(a);

    return 0;
}