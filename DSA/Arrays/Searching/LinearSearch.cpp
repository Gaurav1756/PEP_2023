#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[10] = {2,3,44,32,1,98,47,65,13,19};
    int key;
    cin>>key;
    int ans = linearSearch(arr,10,key);
    if(ans == -1) {
        cout<<"Element is not present";
    }
    else {
        cout<<"Element is present at "<<ans<<endl;
    }
}