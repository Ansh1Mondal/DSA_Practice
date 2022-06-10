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

int get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}

void set(struct Array *arr, int index, int x) // reference value is takes as we have to make changes to the array
{
    if (index >= 0 && index < arr->length)
        arr->A[index] = x;
}

int Max(struct Array arr)
{
    int max = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}

int sum(struct Array arr)
{
    int s = 0, i;
    for (i = 0; i < arr.length; i++)
    {
        s = s + arr.A[i];
    }
    return s;
}

float avg(struct Array arr)
{
    return (float)sum(arr) / arr.length;
}

int main()
{

    struct Array arr = {{1, 2, 3, 4, 5}, 10, 5}; // NORMAL INITIALIZATION OF ARRAY

    cout << get(arr, 2) << endl;
    set(&arr, 0, 10);
    cout << Max(arr) << endl;
    cout << Min(arr) << endl;
    cout << sum(arr) << endl;
    cout << avg(arr) << endl;

    display(arr);

    return 0;
}