#include<iostream>
using namespace std;
void swap(int *x, int *y)
{

    int temp = *x;
    *x = *y;
    *y = temp;
}
void bublesort(int *array,int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (array[j]>array[j+1])
            {
                swap(&array[j],&array[j+1]);
            }
            
        }
        
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
    bublesort(arr, n);
    cout << " elements after sorting :" << endl;

    display(arr, n);

    return 0;
}
