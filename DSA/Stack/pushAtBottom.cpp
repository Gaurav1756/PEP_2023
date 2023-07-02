#include<iostream>
#include<stack>
using namespace std;

int size(stack<int> s) {
    int count = 0;
    while(!s.empty()) {
        count++;
        s.pop();
    }
    return count;
}

void print(stack<int> s) {
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main() {
    stack<int> s;
    s.push(3);
    s.push(5);
    s.push(7);
    s.push(2);
    s.push(9);
    s.push(14);
    s.push(1);
    print(s);
    int element;
    cin>>element;
    stack<int> t;
    while(!s.empty()) {
        int ele = s.top();
        s.pop();
        t.push(ele);
    }
    s.push(element);
    while(!t.empty()) {
        int ele = t.top();
        t.pop();
        s.push(ele);
    }
    print(s);
}