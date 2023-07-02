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
    int length = size(s);
    int newLength = length;
    int mid = length/2 + 1;
    stack<int> t;
    while(newLength > mid) {
        int ele = s.top();
        s.pop();
        t.push(ele);
        newLength--;
    }
    s.pop();
    while(newLength != length) {
        s.push(t.top());
        t.pop();
        newLength++;
    }
    print(s);
}