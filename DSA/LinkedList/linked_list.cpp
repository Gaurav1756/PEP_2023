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

void deletion(Node* &head, int key) {
    if(head == NULL) {
        return;
    }
    Node* temp = head;
    while(temp->next->data != key) {
        temp = temp->next;
    }
    Node* first = temp->next;
    temp->next = temp->next->next;
    delete(first);

}

void deleteAtHead(Node* &head) {
    Node* nodeToDelete = head;
    head = head->next;
    delete(nodeToDelete);
}

bool search(Node* &head, int key) {
    Node* temp = head;
    while(temp != NULL) {
        if(temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void reverse(Node* &head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = curr->next;

    while(curr != NULL) {
        
    }
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
    // deleteAtHead(head);
    // deletion(head,10);
    // bool ans = search(head,8);
    // if(ans) {
    //     cout<<"Element is present";
    // }
    // else {
    //     cout<<"Element is not present";
    // }
    reverse(head);
    display(head);

}