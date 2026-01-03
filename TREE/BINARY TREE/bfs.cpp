#include "BINARY_TREE.h"
#include <bits/stdc++.h>

void bfs(Node* root){
    std::queue<Node*> que;
    if(root != nullptr) que.push(root);
    while(que.size() > 0){
        Node* temp = que.front();
        if(temp->left != nullptr ) que.push(temp->left);
        if(temp->right != nullptr) que.push(temp->right);
        std::cout<<temp->val<<" ";
        que.pop();
    }
}
int main(){
    Node *root = new Node(5);
    Node *a = new Node(1);
    Node *b = new Node(2);
    root->left = a;
    root->right = b;
    Node *c = new Node(3);
    Node *d = new Node(6);
    a->left = c;
    a->right = d;
    Node *e = new Node(7);
    c->left = e;
    bfs(root);
}