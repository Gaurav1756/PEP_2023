#include<iostream>
#include<stack>
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

void zigZag(Node* root) {
    stack<Node *> currLevel;
    stack<Node *> nextLevel;

    bool leftToRight = true;
    currLevel.push(root);

    while(!currLevel.empty()) {
        Node* temp = currLevel.top();
        currLevel.pop();
        if(temp) {
            cout<<temp->data<<" ";
            if(leftToRight) {
                if(temp->left) {
                    nextLevel.push(temp->left);
                }
                if(temp->right) {
                    nextLevel.push(temp->right);
                }
            }
            else {
                if(temp->right) {
                    nextLevel.push(temp->right);
                }
                if(temp->left) {
                    nextLevel.push(temp->left);
                }
            }
        }
        if(currLevel.empty()) {
            leftToRight = !leftToRight;
            swap(nextLevel,currLevel);
        }
    }
}

void inorder(Node* root) {
    if(root == NULL) {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->left = new Node(8);
    zigZag(root);
}