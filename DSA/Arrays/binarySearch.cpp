#include<iostream>
using namespace std;

int binarySearch(int arr[], int key, int size) {
    int start = 0; 
    int end = size-1;
    int mid = start + (end - start)/2;
    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return -1;
}

int main() {
    int arr[] = {5,7,9,11,13,16,17};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = binarySearch(arr,11,size);
    cout<<"Element is present at "<<ans;
}