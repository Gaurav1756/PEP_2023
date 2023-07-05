#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void print(queue<int> q) {
    while(!q.empty()) {
        int a = q.front();
        cout<<a<<" ";
        q.pop();
    }
    cout<<endl;
}

void reverseQueue(queue<int> &q) {
    stack<int> s;
    while(!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    print(q);
    reverseQueue(q);
    print(q);
}