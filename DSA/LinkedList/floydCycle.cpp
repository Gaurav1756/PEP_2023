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

Node* floydDetect(Node* &head) {
    if(head == NULL) {
        return NULL;
    }
    Node* first = head;
    Node* second = head;
    while(second != NULL) {
        second = second->next;
        if(second != NULL) {
            second = second->next;
        }
        first = first->next;
        if(first == second) {
            return first;
        }
    }
    return NULL;
}

int main() {
    Node* head = NULL;
    insertAtTail(head,5);
    insertAtTail(head,15);
    insertAtTail(head,10);
    insertAtHead(head,12);
    insertAtTail(head,8);
    insertAtTail(head,20);
    Node* ans = floydDetect(head);
    cout<<ans->data;
}