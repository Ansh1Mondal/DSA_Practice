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

int binarySearch(struct Array arr, int key) // iterative method
{
    int l, mid, h;
    l = 0;
    h = arr.length - 1;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }

    return -1;
}

int RbinarySearch(int a[], int l, int h, int key) // recursive method
{
    int mid;

    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            return RbinarySearch(a, l, mid - 1, key);
        else
            return RbinarySearch(a, mid + 1, h, key);
    }
    return -1;
}

int main()
{
    int i, n;

    struct Array arr = {{1, 2, 3, 4, 5}, 10, 5}; // NORMAL INITIALIZATION OF ARRAY

    // cout << binarySearch(arr, 2);
    cout << RbinarySearch(arr.A, 0, arr.length, 1);
    display(arr);

    return 0;
}

// *** while taking pointers and address as reference values we shoul use arrows instead of dots *** (like in line 30,31 etc)