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

int sumAtKNodes(Node *root,int k) {
    if(root == NULL) {
        return -1;
    }
    int sum = 0;
    int level = 0;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()) {
        Node* curr = q.front();
        q.pop();
        if(curr != NULL) {
            if(level == k) {
                sum = sum + curr->data;
            }
            if(curr->left) {
                q.push(curr->left);
            }
            if(curr->right) {
                q.push(curr->right);
            }
        }
        else if(!q.empty()) {
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    int ans = sumAtKNodes(root,2);
    cout<<ans;
}