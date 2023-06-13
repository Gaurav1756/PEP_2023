#include<iostream>
using namespace std;
int squareRoot(int n) {
    int start = 0;
    int end = n;
    int mid = start + (end - start)/2;
    while(start < end) {
        if(mid* mid == n) {
            return mid;
        }
        else if(mid*mid > n) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return mid;
}

int main() {
    int n;
    cin>>n;
    int ans = squareRoot(n);
    cout<<"Square root of "<<n<<" is "<<ans;
}