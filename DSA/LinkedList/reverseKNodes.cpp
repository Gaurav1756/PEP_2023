#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val) {
    Node* n = new Node(val);
    n->next = head;
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
}

Node* Kreverse(Node* &head, int k) {
    if(head == NULL) {
        return NULL;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward;

    int count = 0;  

    while(count < k && curr != NULL) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    if(forward != NULL) {
        head->next = Kreverse(forward,k);
    }
    return prev;
}

void display(Node* &head) {
    Node* temp = head;
    while(temp!= NULL) {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtHead(head,8);
    insertAtTail(head,9);
    insertAtTail(head,10);
    insertAtHead(head,5);
    display(head);
    Node* ans = Kreverse(head,2);
    display(ans);
}