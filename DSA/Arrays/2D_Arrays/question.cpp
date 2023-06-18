#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int column) {
    for(int row = 0; row < 3; row++) {
        for(int column = 0; column < 4; column++) {
            if(arr[row][column] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Element to search : "<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,4)) {
        cout<<"Element is present";
    }
    else {
        cout<<"Element is not present";
    }
}