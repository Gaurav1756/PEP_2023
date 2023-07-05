#include<iostream>
#include<queue>
using namespace std;

void interleaveQueue(queue<int> &q) {
    queue<int> a;
    queue<int> b;
    int size = q.size();
    int mid = size/2;
    int count = 0;
    while(count < mid) {
        a.push(q.front());
        q.pop();
        count++;
    }
    while(!q.empty()) {
        b.push(q.front());
        q.pop();
    }
    while(!a.empty() && !b.empty()) {
        q.push(a.front());
        a.pop();
        q.push(b.front());
        b.pop();
    }
}

void print(queue<int> q) {
    while(!q.empty()) {
        int element = q.front();
        cout<<element<<" ";
        q.pop();
    }
    cout<<endl;
}

int main() {
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    print(q);
    interleaveQueue(q);
    print(q);
}