#include<iostream>
using namespace std;

void spiralPrint(int arr[4][4]) {
    int top = 0,right = 3,bottom = 3,left = 0;
    while(top <= bottom && left <= right) {
        for(int j = left; j <= right; j++) {
            cout<<arr[top][j]<<" ";
        }
        top++;
        for(int i = top; i <= bottom; i++) {
            cout<<arr[i][right]<<" ";
        }
        right--;
        if(top <= bottom) {
            for(int j = right; j >=left; j--) {
                cout<<arr[bottom][j]<<" ";
            }
            bottom--;
        }
        if(left <= right) {
            for(int i = bottom; i >=top; i--) {
                cout<<arr[i][left]<<" ";
            }
            left++;
        }
    }
}

int main() {
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    spiralPrint(arr);
}