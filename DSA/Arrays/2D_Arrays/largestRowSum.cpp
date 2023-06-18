#include<iostream>
#include<climits>
using namespace std;

int maxSum(int arr[][4], int i, int j) {
    int ans = INT_MIN;
    int index = 0;
    for(int i = 0; i < 3; i++) {
        int sum = 0;
        for(int j = 0; j < 4; j++) {
            sum = sum + arr[i][j];
        }
        if(sum > ans) {
            index = i;
        }
        ans = max(ans,sum);
    }
    return index;
}

int main() {
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int ans = maxSum(arr,3,4);
    cout<<ans;
}