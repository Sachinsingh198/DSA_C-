#ifndef TRAVERSAL
#define TRAVERSAL
#include <bits/stdc++.h>
class Node
{
public:
    Node *right;
    Node *left;
    int val;
    Node(void) : right(nullptr), left(nullptr), val(0) {}
    Node(int val) : right(nullptr), left(nullptr)
    {
        this->val = val;
    }
};

void display(const Node *root)
{
    if (root == nullptr)
        return;
    std::cout << root->val << " -> ";
    if (root->left != nullptr)
        std::cout << root->left->val << " ";
    if (root->right != nullptr)
        std::cout << root->right->val << " ";
    std::cout << std::endl;
    display(root->left);
    display(root->right);
}

// Traversal in a tree
void preorder(const Node *root)
{
    if (root == nullptr)
        return;
    std::cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(const Node *root)
{
    if (root == nullptr)
        return;
    inorder(root->left);
    std::cout << root->val << " ";
    inorder(root->right);
}

void postorder(const Node *root)
{
    if (root == nullptr)
        return;
    preorder(root->left);
    preorder(root->right);
    std::cout << root->val << " ";
}

// find the size of the binary tree
int size(const Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    return size(root->left) + size(root->right) + 1;
}

// Find the sum of the tree nodes
int sum(const Node *root)
{
    if (root == nullptr)
        return 0;
    return root->val + sum(root->left) + sum(root->right);
}

// find the node with the maximum value
int max(const Node *root)
{
    if (root == nullptr)
        return INT_MIN;
    return std::max(root->val, std::max(max(root->right), max(root->left)));
}

// find the min value in the tree
int min(const Node *root)
{
    if (root == nullptr)
        return INT_MAX;
    return std::min(root->val, std::min(min(root->right), min(root->left)));
}

/* Find the product of all the nodes present in the tree*/
int product(const Node *root)
{
    if (root == nullptr)
        return 1;
    return root->val * product(root->left) * product(root->right);
}
/* Find the height of the binary tree*/
int height(const Node *root)
{
    if (root == nullptr)
        return 0;
    if (root->left == nullptr and root->right == nullptr)
        return 0;
    return 1 + std::max(height(root->left), height(root->right));
}


//Level Order Traversal (BFS) 

void nthLevel(const Node* root, int n){
    if(root == nullptr) return;
    if(n == 1){
        std::cout<<root->val<<" ";
    }
    nthLevel(root->left,n-1);
    nthLevel(root->right,n-1);
}

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

// bool is_balanced(const Node* root){
//     if(root == nullptr) return true;
//     return (height(root->right) - height(root->left) <= 1 and height(root->right) - height(root->left) >= -1);
// }

#endif