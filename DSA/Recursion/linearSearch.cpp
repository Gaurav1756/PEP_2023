#include<iostream>
using namespace std;

bool linearSearch(int arr[],int target, int size) {
    if(size == 0) {
        return false;
    }
    if(arr[0] == target) {
        return true;
    }
    return linearSearch(arr+1,target,size-1);
}

int main() {
    int arr[] = {6,1,4,9,3,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
    bool ans = linearSearch(arr,target,size);
    if(ans) {
        cout<<"Element is present";
    }
    else {
        cout<<"Element is not present";
    }
}