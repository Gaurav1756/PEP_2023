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


void deletion(Node* &head, int k) {
    if(k == 1) {
        Node* curr = head;
        while(curr->next != head) {
            curr = curr->next;
        }
        Node* temp = head;
        curr->next = head->next;
        head = head->next;
        delete(temp);
        return;
    }
    Node* prev = NULL;
    Node* curr = head;
    int count = 1;
    while(count < k) {
        prev = curr;
        curr = curr->next;
        count++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete(curr);
}

void display(Node* &head) {
    Node* temp = head;
    do {
        cout<<temp->data<<"->";
        temp = temp->next;
    }while(temp != head);
    cout<<"NULL"<<endl;
}

int main() {
    Node* head = NULL;
    insertAtTail(head,5);
    insertAtTail(head,15);
    insertAtTail(head,10);
    insertAtHead(head,12);
    insertAtTail(head,8);
    insertAtTail(head,20);
    display(head);
    deletion(head,1);
    display(head);
}