#include<iostream>
#include<climits>
using namespace std;

int getMin(int arr[], int size) {
    int ans = INT_MAX;
    for(int i = 0; i < size; i++) {
        if(arr[i]<ans) {
            ans = arr[i];
        }
    }
    return ans;
}

int main() {
    int size; 
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[100];
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }
    cout<<"Minimum element is "<<getMin(arr,size);
}