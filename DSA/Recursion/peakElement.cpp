#include<iostream>
using namespace std;

int peakElement(int arr[], int size,int start, int end) {
    if(start == end) {
        return arr[start];
    }
    int mid = start + (end - start)/2;
    if(arr[mid] < arr[mid+1]) {
        return peakElement(arr,size,mid+1,end);
    }
    else {
        return peakElement(arr,size,start,mid);
    }
}

int main() {
    int arr[] = {1,2,4,5,7,12,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = peakElement(arr,size,0,size-1);
    cout<<ans;
}