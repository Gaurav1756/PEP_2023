#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val) {
    Node* n = new Node(val);
    if(head == NULL) {
        n->next = n;
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next != head) {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(Node* &head, int val) {
    Node* n = new Node(val);
    if(head == NULL) {
        insertAtHead(head,val);
        return;
    }
    Node* temp = head;
    while(temp->next != head) {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

bool isCircular(Node* &head) {
    if(head == NULL) {
        return true;
    }
    Node* temp = head->next;
    while(temp != NULL && temp != head) {
        temp = temp->next;
    }
    if(temp == head) {
        return true;
    }
    return false;
}

int main() {
    Node* head = NULL;
    insertAtTail(head,5);
    insertAtTail(head,15);
    insertAtTail(head,10);
    insertAtHead(head,12);
    insertAtTail(head,8);
    insertAtTail(head,20);
    bool ans = isCircular(head);
    if(ans) {
        cout<<"Linked list is circular";
    }
    else {
        cout<<"Linked list is not circular";
    }
}