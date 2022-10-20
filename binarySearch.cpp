#include<iostream>
using namespace std;


int BinarySearch(int arr[], int size,int key){
int start = 0;
int end = size-1;
int mid = start + (end - start)/2;

while (start<=end)
{
    if (arr[mid] == key)
    {
        return mid;
    }
    if (key > arr[mid]) //if key is grater go to right part
    {
       start = mid +1;
    }else{
       end = mid - 1;
    }
    // mid = (start+end)/2;
    mid = start + (end - start)/2;
}
return -1;
}
int main(){
int even[6] = {2,4,6,8,12,18};
int odd[5] = {3,8,11,14,16};

int index = BinarySearch(odd,5,14);

cout<<"Index of 12 is "<<index<<endl;

    return 0;
}