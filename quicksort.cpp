#include <iostream>
using namespace std;
void swap(int *x, int *y)
{

    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int *array,int first,int last){
    int pivot,start,end;
    pivot=array[first];
    start=first;
    end=last;

    while (start<end)
    {
        while (array[start]<=pivot && start<end)
        {
            start++;
        }
        while (array[end]>pivot)
        {
            end--;
        }
        if (start<end)
        {
            swap(&array[start],&array[end]);
        }
        
    }
    
    array[first]=array[end];
    array[end]=pivot;
    return last;

}

void quicksort(int *array,int left,int right)
{
    int q;
    if(left<right){
         q = partition(array, left, right);
      quicksort(array, left, q-1);    
      quicksort(array, q+1, right);
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
    quicksort(arr, 0,n-1);
    cout << " elements after sorting :" << endl;

    display(arr, n);

    return 0;
}