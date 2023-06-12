#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key) {
    int start = 0; 
    int end = size-1;
    int mid = start + (end - start)/2;
    int result = -1;
    while(start <= end) {
        if(arr[mid] == key) {
            result = mid;
            end = mid - 1;
        }
        else if(arr[mid] > key) {
            end = start - 1;
        }
        else {
            start = mid + 1;
        }
        mid = (start + end)/2;
    }
    return result;
}

int lastOccurence(int arr[], int size, int key) {
    int start = 0; 
    int end = size-1;
    int mid = start + (end - start)/2;
    int result = -1;
    while(start <= end) {
        if(arr[mid] == key) {
            result = mid;
            start = mid + 1;
        }
        else if(arr[mid] > key) {
            end = start - 1;
        }
        else {
            start = mid + 1;
        }
        mid = (start + end)/2;
    }
    return result;
}

int main() {
    int arr[] = {1,2,3,3,3,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int first = firstOccurence(arr,size,3);
    int last = lastOccurence(arr,size,3);
    int ans = (last - first + 1);
    cout<<"Total no of occurences are "<<ans;
}