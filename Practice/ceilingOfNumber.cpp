#include<iostream>
using namespace std;

int floorNumber(int arr[],int target, int s, int e) {
    int mid = s + (e-s)/2;
    if(target > arr[e]) {
        return -1;
    }
    while(s <= e) {
        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] > target) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return mid;
}

int main() {
    int arr[] = {7,9,12,18,20,24};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
    int ans = floorNumber(arr,target,0,size-1);
    cout<<ans;
}