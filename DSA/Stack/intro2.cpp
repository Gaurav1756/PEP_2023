#include<iostream>
using namespace std;

class Stack {
    int *arr;
    int top;
    int size;
    public:
    Stack() {
        arr = new int[size];
        top = -1;
    }
    void push(int val) {
        if(top == size-1) {
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top] = val;
    }
    void pop() {
        if(top == -1) {
            cout<<"No elements to pop"<<endl;
            return;
        }
        top--;
    }
    int Top() {
        if(top == -1) {
            cout<<"No elements in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty() {
        return top == -1;
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while(s.empty() == false) {
        cout<<s.Top()<<" ";
        s.pop();
    }
}