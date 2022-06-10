// ADT means that performing different in the array like adding append display delete etc.

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

void append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}

void insert(struct Array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr->length)
    {
        for (i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = x;
        arr->length++;
    }
}

int Delete(struct Array *arr, int index)
{
    int i, x = 0;
    if (index >= 0 && index <= arr->length)
    {
        x = arr->A[index];

        for (i = index; i < arr->length - 1; i++)
            arr->A[i] = arr->A[i + 1];
        arr->length--;
        return x;
    }
    return 0;
}

int main()
{
    int i, n;

    struct Array arr = {{1, 2, 3, 4, 5}, 10, 5}; // NORMAL INITIALIZATION OF ARRAY

    // cout << "enter the size of array:";
    // cin >> arr.size;
    // arr.A = new int[arr.size]; // in C :- arr.A = (int*)malloc(arr.size*sizeof(int));
    // arr.length = 0;

    // cout << "enter the no. of numbers:";
    // cin >> n;                                                  *** THIS IS HOW ARRAY IN HEAP WORKS and coded ***

    // cout << "enter the elements for array:" << endl;
    // for (i = 0; i < n; i++)
    // {
    //     cin >> arr.A[i];
    //     cout << endl;
    // }
    // arr.length = n;

    // append(&arr, 10);
    // insert(&arr, 3, 12);
    cout << Delete(&arr, 2);
    display(arr);

    return 0;
}