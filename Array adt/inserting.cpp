#include <iostream>
using namespace std;

//            WHENEVER MODIFYING AN ARRAY USE CALL BY REFERENCE

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

void insertSort(struct Array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length = arr->size)
        return;

    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}

int isSorted(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
    }
    return 1;
}

void rearrange(struct Array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[i] >= 0)
            j--;
        if (i < j)
            swap(&arr->A[i], &arr->A[j]);
    }
}

int main()
{
    int i, n;

    struct Array arr = {{1, 2, 3, 4, -5, -6}, 10, 6}; // NORMAL INITIALIZATION OF ARRAY

    // insertSort(&arr, 6);
    rearrange(&arr);
    display(arr);
    // cout << isSorted(arr);

    return 0;
}