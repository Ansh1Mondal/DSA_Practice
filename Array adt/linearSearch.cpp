#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr)
{
    int i;
    cout << " \n Elements of array:" << endl;
    for (i = 0; i < arr.length; i++)
        cout << arr.A[i] << endl;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int linearSearch(struct Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == key)
        {
            // swap(&arr->A[i], &arr->A[i - 1]); // transpositions method
            swap(&arr->A[i], &arr->A[0]); // move to front/head method
            return i;
        }
    }
    return -1;
}

int main()
{
    int i, n;

    struct Array arr = {{1, 2, 3, 4, 5}, 10, 5}; // NORMAL INITIALIZATION OF ARRAY

    display(arr);
    cout << endl;
    cout << linearSearch(&arr, 3);
    display(arr);

    return 0;
}

// *** while taking pointers and address as reference values we shoul use arrows instead of dots *** (like in line 30,31 etc)