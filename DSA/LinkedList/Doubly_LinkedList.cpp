#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val) {
    Node* n = new Node(val);
    if(head == NULL) {
        head = n;
        return;
    }
    n->next = head;
    head->prev = n;
    head = n;
}

void insertAtTail(Node* &head, int val) {
    Node* n = new Node(val);
    if(head == NULL) {
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void deletion(Node* &head, int pos) {
    if(pos == 1) {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete(temp);
    }
    Node* prev = NULL;
    Node* curr = head;
    int count = 1;
    while(count < pos && curr != NULL) {
        prev = curr;
        curr = curr->next;
        count++;
    }
    prev->next = curr->next;
    curr->prev = prev;
    curr->next = NULL;
    curr->prev = NULL;
    delete(curr);
}

void display(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {
    Node* head = NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtHead(head,40);
    insertAtHead(head,35);
    deletion(head,5);
    display(head);
}