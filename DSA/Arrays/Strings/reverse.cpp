#include<iostream>
using namespace std;

void reverse(string &name, int length) {
    int s = 0;
    int e = length-1;
    while(s <= e) {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

int main() {
    string name;
    cin>>name;
    int length = name.length();
    reverse(name, length);
    cout<<name;
}