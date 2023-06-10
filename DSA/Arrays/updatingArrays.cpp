#include<iostream>
using namespace std;

void update(int arr[], int n) {
    arr[0] = 10;
    for(int i = 0; i < 3; i++) {
        cout<<arr[i]<<" "<<endl;
    }
}

int main() {
    int arr[3] = {1,2,3};
    update(arr,3);
    for(int i = 0; i < 3; i++) {
        cout<<arr[i]<<" "<<endl;
    }
}