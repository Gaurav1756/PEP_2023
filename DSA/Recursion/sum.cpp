#include<iostream>
using namespace std;

int getSum(int arr[], int size) {
    int sum = 0;
    if(size == 0) {
        return 0;
    }
    if(size == 1) {
        sum = arr[0];
    }
    sum = arr[0];
    return sum + getSum(arr+1, size-1);

}

int main() {
    int arr[] = {4,7,1,8,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = getSum(arr,size);
    cout<<ans;
}