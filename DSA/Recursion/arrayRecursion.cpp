#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    if(size  == 1 || size == 0) {
        return true;
    }
    if(arr[0]>arr[1]) {
        return false;
    }
    else {
         return isSorted(arr+1, size-1);
    }
}

int main() {
    int arr[] = {3,5,2,9,1};
    // int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool ans = isSorted(arr,size);
    if(ans) {
        cout<<"Array is sorted";
    }
    else {
        cout<<"Array is not sorted";
    }
}