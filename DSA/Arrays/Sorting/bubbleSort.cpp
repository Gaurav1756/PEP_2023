#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void print(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {5,6,3,1,4,8,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    cout<<endl;
    bubbleSort(arr,size);
    print(arr,size);
}