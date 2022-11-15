#include <iostream>
using namespace std;
void swap(int *x, int *y)
{

    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort(int *array, int size)
{
    int i, j, min_index;
    for (i = 0; i < size; i++)
    {
        min_index = i;

        for (j = i + 1; j < size; j++)
            if (array[j] < array[min_index])

                min_index = j;

        swap(&array[i], &array[min_index]);
    }
}
void display(int *array, int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
int main()
{
    int n;
    cout << "enter the no. of elements: " << endl;
    cin >> n;

    int arr[n];
    cout << "enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    cout << " elements before sorting:" << endl;

    display(arr, n);
    sort(arr, n);
    cout << " elements after sorting :" << endl;

    display(arr, n);

    return 0;
}
