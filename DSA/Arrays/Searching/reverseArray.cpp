#include<iostream>
using namespace std;

void reverse(int arr[], int size) {
    int i = 0; 
    int j = size-1;
    while(i <= j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main() {
    int arr[] = {2,4,5,1,9,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,size);
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }

}