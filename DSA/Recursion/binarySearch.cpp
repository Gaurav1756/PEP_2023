#include<iostream>
using namespace std;

bool binarySearch(int arr[], int target, int start, int end) {
    if(start > end) {
        return false;
    }
    int mid = start + (end-start)/2;
    if(arr[mid] == target) {
        return true;
    }
    else if(arr[mid] > target) {
        return binarySearch(arr,target,start,mid-1);
    }
    else {
        return binarySearch(arr,target,mid+1,end);
    }
}

int main() {
    int arr[] = {3,5,8,10,14,19};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
    bool ans = binarySearch(arr,target,0,size-1);
    if(ans) {
        cout<<"Element is Present";
    }
    else {
        cout<<"Element is not present";
    }
}