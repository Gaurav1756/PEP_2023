#include<iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for(int i = 0; i < size-1; i++) {
        int min_index = i;
        for(int j = i+1; j < size; j++) {
            if(arr[min_index] > arr[j]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

void print(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {4,6,2,1,3,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    cout<<endl;
    selectionSort(arr,size);
    print(arr,size);
}