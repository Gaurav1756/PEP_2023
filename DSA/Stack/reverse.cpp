#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<char> s;
    char st[] = "Hey, how are you ?";
    for(int i = 0; st[i] != '\0'; i++) {
        s.push(st[i]);
    }
    while(s.empty() == false) {
        cout<<s.top()<<" ";
        s.pop();
    }
}