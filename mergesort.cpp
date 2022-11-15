#include <iostream>
using namespace std;
void merge(int *array, int left, int mid, int right)
{
    int subarrayone, subarraytwo;
    subarrayone = mid - left + 1;
    subarraytwo = right - mid;

    int leftarray[subarrayone], rightarray[subarraytwo];
    for (int i = 0; i < subarrayone; i++)
    {
        leftarray[i] = array[left + i];
    }
    for (int j = 0; j < subarraytwo; j++)
    {
        rightarray[j] = array[mid + 1 + j];
    }

    int indexarrayone = 0, indexarraytwo = 0;
    int indexofmergearray = left;

    while (indexarrayone < subarrayone && indexarraytwo < subarraytwo)
    {
        if (leftarray[indexarrayone] <= rightarray[indexarraytwo])
        {
            array[indexofmergearray] = leftarray[indexarrayone];
            indexarrayone++;
        }
        else
        {
            array[indexofmergearray] = rightarray[indexarraytwo];
            indexarraytwo++;
        }
        indexofmergearray++;
    }
    while (indexarrayone < subarrayone)
    {
        array[indexofmergearray] = leftarray[indexarrayone];
        indexarrayone++;
        indexofmergearray++;
    }
    while (indexarraytwo < subarraytwo)
    {
        array[indexofmergearray] = rightarray[indexarraytwo];
        indexarraytwo++;
        indexofmergearray++;
    }
}

void mergesort(int *array, int l, int r)
{
    int m;
    if (l < r)
    {
        int m = l + (r - l) / 2;
        // Sort first and second arrays
        mergesort(array, l, m);
        mergesort(array, m + 1, r);
        merge(array, l, m, r);
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
    mergesort(arr,0, n-1);
    cout << " elements after sorting :" << endl;

    display(arr, n);

    return 0;
}
