#include<iostream>
using namespace std;

void update(int n) {
    n++;
}

void updateRef(int &n) {
    n++;
}

int main() {
    // int i = 5;
    // int &j = i;
    // j++;
    // cout<<j<<endl;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // cout<<j<<endl;
    int n = 5;
    cout<<"Before : "<<n<<endl;
    updateRef(n);
    cout<<"After : "<<n;
}