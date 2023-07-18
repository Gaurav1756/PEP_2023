#include<iostream>
using namespace std;

class Node {
    public: 
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node* insertBST(Node* root, int val) {
    if(root == NULL) {
        return new Node(val);
    }
    if(val < root->data) {
        root->left = insertBST(root->left,val);
    }
    else {
        root->right = insertBST(root->right,val);
    }
    return root;
}

Node* searchInBST(Node* root, int val) {
    if(root == NULL) {
        return NULL;
    }
    if(root->data == val) {
        return root;
    }
    if(val < root->data) {
        searchInBST(root->left,val);
    }
    else {
        searchInBST(root->right,val);
    }
}

int main() {
    Node* root = NULL;
    root = insertBST(root,7);
    insertBST(root,1);
    insertBST(root,6);
    insertBST(root,2);
    insertBST(root,9);
    insertBST(root,11);
    insertBST(root,4);
    insertBST(root,5);
    insertBST(root,8);
    insertBST(root,15);
    if(searchInBST(root,1) != NULL) {
        cout<<"Key exist";
    }
    else {
        cout<<"Key does not exist";
    }
}