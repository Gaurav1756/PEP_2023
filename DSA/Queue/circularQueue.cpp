#include<iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int front;
    int back;
    int size;
    public:
    CircularQueue() {
        size = 1000;
        arr = new int[size];
        front = -1;
        back = -1;
    }
    bool enque(int value) {
        if(back = size-1 && front == 0) {
            cout<<"Queue is full"<<endl;
            return false;
        } 
        else if(front == -1) {
            front = 0;
            back = 0;
            arr[back] = value;
        }
        else if(back == size-1 && front != 0) {
            back = 0;
            arr[back] = value;
        }
        else {
            back++;
            arr[back] = value;
        }
    }
    bool deque() {
        if(front == -1) {
            cout<<"Queue is empty"<<endl;
        }
        else if(back = size-1 && front != 0) {
            front++;
        }
        else if(front = size-1) {
            front = 0;
        }
        else {
            front++;
        }
    }
};

int main() {
    CircularQueue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.enque(5);
}