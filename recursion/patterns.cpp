#include <iostream>
#include <string>

using namespace std;

int main()
{
        // int r, c, i;

        // cout << "enter row" << endl;
        // cin >> r;
        // cout << "enter column" << endl;
        // cin >> c;                                                //  ***BASIC PATTERNS***

        // for (i = 1; i <= r; i++)
        // {
        //         for (int j = 1; j <= c; j++)
        //         {
        //                 cout << "*";
        //         }
        //         cout << endl;
        // }
        ///////////////////////////////////////////
        // int r, c;
        // cin >> r >> c;

        // for (int i = 1; i <= r; i++)
        // {
        //         for (int j = 1; j <= c; j++)
        //         {
        //                 if (i == 1 || i == r)                        //  ***HOLLOW PATTERNS***
        //                         cout << "*";
        //                 else if (j == 1 || j == c)
        //                         cout << "*";
        //                 else
        //                         cout << " ";
        //         }
        //         cout << endl;
        // }
        //////////////////////////////////////
        // int n;
        // cin >> n;

        // for (int i = n; i >= 1; i--)
        // {

        //         for (int j = 1; j <= i; j++)                            //  ***INVERTED HALF PYRAMID PATTERN***
        //         {
        //                 cout << "*";
        //         }
        //         cout << endl;
        // }
        ///////////////////////////////////////

        // int n;
        // cin >> n;

        // for (int i = 1; i <= n; i++)
        // {
        //         for (int j = 1; j <= n; j++)
        //         {
        //                 if (j <= n - i)
        //                 {                                                         //  *** HALF PYRAMID PATTERN 180^o***
        //                         cout << "  ";
        //                 }
        //                 else
        //                 {
        //                         cout << "* ";
        //                 }
        //         }
        //         cout << endl;
        // }
        ///////////////////////////////////////////////
        // int n;
        // cin >> n;

        // for (int i = 1; i <= n; i++)
        // {
        //         for (int j = 1; j <= i; j++)                                   //   *** NUMBER PYRAMID ***
        //         {
        //                 cout << i << " ";
        //         }
        //         cout << endl;
        // }

        ////////////////////////////////////////////

        // int count = 1, n;
        // cin >> n;

        // for (int i = 1; i <= n; i++)
        // {
        //         for (int j = 1; j <= i; j++)
        //         {
        //                 cout << count << " ";                                      // *** FLOYD'S TRIANGLE ***
        //                 count++;
        //         }
        //         cout << endl;
        // }

        //////////////////////////////////////////////

        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {

                for (int j = 1; j <= i; j++)
                {

                        cout << "* ";
                }

                int space = 2 * (n - i);

                for (int j = 1; j <= space; j++)
                {

                        cout << "  ";
                }
                for (int j = 1; j <= i; j++)
                {

                        cout << "* ";
                }

                cout << endl;
        }                                    /////////////////////////////////////////////////////////////////
        for (int i = n; i >= 1; i--)         //                                                            //
        {                                    //                   ***BUTTERFLY PATTERN***                  //
                                             //                                                            //
                for (int j = 1; j <= i; j++) ////////////////////////////////////////////////////////////////
                {

                        cout << "* ";
                }

                int space = 2 * (n - i);

                for (int j = 1; j <= space; j++)
                {

                        cout << "  ";
                }
                for (int j = 1; j <= i; j++)
                {

                        cout << "* ";
                }

                cout << endl;
        }

        return 0;
}