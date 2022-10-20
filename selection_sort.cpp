#include<iostream>
using namespace std;

void printArray(int arr[], int size){
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}
}

void SelectionSort(int arr[], int n){
    
   for (int i = 0; i < n-1; i++)
   {
    int MinIndex = i;
    for (int j = i+1; j < n; j++)
    {
       if (arr[j] < arr[MinIndex])
       {
        MinIndex = j;
       }
       
    }
    swap(arr[MinIndex], arr[i]);
   }
   


}


int main(){
int arr[5] = {6,2,8,4,10};

cout<<"Array Before Selection Sort will be ";
printArray(arr,5);

SelectionSort(arr,5);
cout<<"Array After Selection Sort will be "<<endl;
printArray(arr,5);

    return 0;
}