#include<iostream>
using namespace std;

void BubbleSort(int arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j <size-1-i; j++){
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
}


void PrintArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
}

int main(){

int arr[6] = {10,1,7,6,14,9};
 
cout<<"Array Before Bubble sort "<<endl;
 PrintArray(arr,6);



 BubbleSort(arr,6);
 cout<<"Array After  Bubble sort "<<endl;
 PrintArray(arr,6);





    return 0;
}