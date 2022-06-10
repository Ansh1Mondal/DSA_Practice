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

struct Array *Merge(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    // now we have to create a array in heap
    struct Array *arr3 = new struct Array;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k] = arr1->A[i]; // element of 1st array is smaller than 2nd array element so copying it in 3rd array and incrementing the 1st and 3rd array positions
            i++;
            k++;
        }
        else
        {
            arr3->A[k] = arr2->A[j]; // element of 1st array is not smaller so copying element of 2nd array in 3rd array and incrementing the 2nd and 3rd array positions
            j++;
            k++;
        }
    }
    for (; i < arr1->length; i++)
    {
        arr3->A[k] = arr1->A[i];
        i++;
        k++;
    }
    for (; j < arr2->length; j++)
    {
        arr3->A[k] = arr2->A[j];
        j++;
        k++;
    }
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;
    return arr3;
}

int main()
{
    int i, n;

    struct Array arr1 = {{1, 3, 5, 7}, 10, 4}; // NORMAL INITIALIZATION OF ARRAY
    struct Array arr2 = {{2, 4, 6, 8}, 10, 4}; // NORMAL INITIALIZATION OF ARRAY
    struct Array *arr3;

    arr3 = Merge(&arr1, &arr2);
    display(*arr3);

    return 0;
}