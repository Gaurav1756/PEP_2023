#include<iostream>
#include<queue>
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

void levelOrder(Node *root) {
    if(root == NULL) {
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()) {
        Node* curr = q.front();
        q.pop();
        if(curr != NULL) {
            cout<<curr->data<<" ";
            if(curr->left) {
                q.push(curr->left);
            }
            if(curr->right) {
                q.push(curr->right);
            }
        }
        else if(!q.empty()) {
            q.push(NULL);
        }
    }
}

int sumReplacement(Node* root) {
    if(root->left == NULL && root->right == NULL) {
        return root->data;
    }
    if(root->left != NULL && root->right == NULL) {
        root->data = root->data + root->left->data;
        return root->data;
    }
    if(root->left == NULL && root->right != NULL) {
        root->data = root->right->data + root->data;
        return root->data;
    }
    root->data = sumReplacement(root->left) + sumReplacement(root->right);
    return root->data;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);
    levelOrder(root);
    cout<<endl;
    sumReplacement(root);
    levelOrder(root);
}