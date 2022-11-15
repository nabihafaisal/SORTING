#include <iostream>
using namespace std;


void insertionsort(int *array,int size){
    int j,key;
    for (int i = 1; i < size; i++)
    {
        key=array[i];
        j=i;
        while (j>0 &&array[j-1]>key)
        {
            array[j]=array[j-1];
            j--;
        }
        array[j]=key;
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
    insertionsort(arr, n);
    cout << " elements after sorting :" << endl;

    display(arr, n);

    return 0;
}
