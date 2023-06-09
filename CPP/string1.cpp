#include<iostream>
using namespace std;
int main() {
    string dummy = "Hello World";
    cout<<dummy.length()<<endl;
    dummy[1] = 'l';
    cout<<"index :"<<dummy[1]<<endl;
    cout<<dummy;
}