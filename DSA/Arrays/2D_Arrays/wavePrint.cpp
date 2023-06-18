#include<iostream>
using namespace std;

void wavePrint(int arr[3][4]) {
    for(int i = 0; i < 4; i++) {
        if(i%2 == 0) {
            for(int j = 0; j < 3; j++) {
            cout<<arr[j][i]<<" ";
            }
        }
        else {
            for(int j = 2; j >=0; j--) {
                cout<<arr[j][i]<<" ";
            }
        }
    }
}

int main() {
    int arr[3][4] = {{2,40,10,20},{15,30,3,6},{1,4,5,7}};
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    wavePrint(arr);

}