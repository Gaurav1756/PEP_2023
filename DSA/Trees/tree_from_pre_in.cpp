#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inOrder[], int start, int end, int curr) {
    for(int i = 0; i <= end; i++) {
        if(inOrder[i] == curr) {
            return i;
        }
    }
    return -1;
}

Node* buildTree(int preOrder[], int inOrder[], int start, int end) {
    int idx = 0;
    if(start > end) {
        return NULL;
    }
    int curr = preOrder[idx++];
    Node* node = new Node(curr);
    if(start == end) {
        return node;
    }
    int pos = search(inOrder,start,end,curr);
    node->left = buildTree(preOrder,inOrder,start,pos-1);
    node->right = buildTree(preOrder,inOrder,pos+1,end);
    return node;
}

void inOrderPrint(Node* &root) {
    if(root == NULL) {
        return;
    }
    inOrderPrint(root->left);
    cout<<root->data<<endl;
    inOrderPrint(root->right);
}

int main() {
    int preOrder[] = {1,2,4,3,5};
    int inOrder[] = {4,2,1,5,3};

    Node* root = buildTree(preOrder, inOrder,0,4);
    inOrderPrint(root);
}