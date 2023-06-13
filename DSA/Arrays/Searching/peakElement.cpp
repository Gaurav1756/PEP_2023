#include<iostream>
using namespace std;

int findPeak(int arr[], int size) {
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    while(start < end) {
        if(arr[mid] < arr[mid + 1] ) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main() {
    int arr[] = {1,2,4,5,7,6,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = findPeak(arr,size);
    cout<<"Peak element is "<<arr[ans];
}