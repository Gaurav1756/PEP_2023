#include<iostream>
using namespace std; 

int firstOccurence(int arr[], int size, int key) {
    int start = 0; 
    int end = size-1;
    int mid = start + (end - start)/2;
    while(start <= end) {
        if(arr[mid] == key) {
            if(arr[mid-1] == key) {
                end = mid - 1;
            }
            else {
                return mid;
            }
        }
        else if(arr[mid] > key) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = (start + end)/2;
    }
}

int main() {
    int arr[] = {1,2,3,3,3,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = firstOccurence(arr,size,3);
    cout<<"First occurence is "<<ans;
}