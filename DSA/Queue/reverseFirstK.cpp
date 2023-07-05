#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void print(queue<int> q) {
    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

void reverseK(queue<int> &q, int k) {
    int count = 0;
    stack<int> s;
    queue<int> c;
    while(count < k) {
        s.push(q.front());
        q.pop();
        count++;
    }
    while(!q.empty()) {
        c.push(q.front());
        q.pop();
    }
    while(!s.empty()) {
        q.push(s.top());
        s.pop();
    }
    while(!c.empty()) {
        q.push(c.front());
        c.pop();
    }
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    print(q);
    reverseK(q,5);
    print(q);
}