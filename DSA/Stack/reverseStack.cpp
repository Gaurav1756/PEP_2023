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

void insertAtBottom(int x, stack<int> &s) {
    if(s.size() == 0) {
        s.push(x);
        return;
    }
    int a = s.top();
    s.pop();
    insertAtBottom(x,s);
    s.push(a);
}

void reverseStack(stack<int> &s) {
    if(s.size()<=0) {
        return;
    }
    int x = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(x,s);
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
    reverseStack(s);
    print(s);
}