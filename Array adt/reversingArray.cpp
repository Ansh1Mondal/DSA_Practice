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

void reverse(struct Array *arr) //  alternate array creation
{
    int *B;
    int i, j;

    B = new int[arr->size];
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i];
    for (i = 0; i < arr->length; i++)
        arr->A[i] = B[i];
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void reverse2(struct Array *arr)
{
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        int temp;
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp; //           or we can use the swap function mentioned above
    }
}

int main()
{
    int i, n;

    struct Array arr = {{1, 2, 3, 4, 5}, 10, 5}; // NORMAL INITIALIZATION OF ARRAY

    reverse2(&arr);
    display(arr);

    return 0;
}