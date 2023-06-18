#include<iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        int j = i-1;
        while(arr[j+1] < arr[j] && j >= 0) {
            swap(arr[j+1],arr[j]);
            j--;
        }
    }
}

void print(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {10,1,7,4,8,2,11};
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    cout<<endl;
    insertionSort(arr,size);
    print(arr,size);
}