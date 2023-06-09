#include<iostream>
using namespace std;

void find(int num) {
    if(num % 2 == 0) {
        cout<<num<<" is even";
    }
    else {
        cout<<num<<" is odd";
    }
}

int main() {
    int num;
    cin>>num;
    find(num);
}