#include <iostream>
using namespace std;

void InsertionSort(int arr[], int size)
{
    int i, temp, j;
    for (i = 1; i < size; i++) // first loop is for Rounds
    {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > temp) //in this loop comparing element with previous
        {                               // if condition is true then shiting elemnet 
            arr[j + 1] = arr[j];       // to the right size SHIFTING ELEMENT NOT SWAPPING
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[5] = {9, 1, 4, 3, 2};
    InsertionSort(arr, 5);
    PrintArray(arr, 5);

    return 0;
}