#include<iostream>
using namespace std;
int main() {
    int var = 5;
    cout<<&var<<endl;
    int *ptr;
    ptr = &var;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
}