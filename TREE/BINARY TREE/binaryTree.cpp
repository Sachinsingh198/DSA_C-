// #include<bits/stdc++.h>

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val): data(val),left(nullptr),right(nullptr) {}
// };
// Node* insertInBST(Node*& root, const int& val){
//     if(!root){
//         root = new Node(val);
//         return root;
//     }
//     if(val < root->data){
//         root->left = insertInBST(root->left,val);
//     }
//     else{
//         root->right = insertInBST(root->right,val);
//     }
//     return root;
// }

// //inorder traversal of binary search tree always gives the sorted(increasing) sequence of the tree
// void inorder( Node*& root){
//     if(!root){
//         return;
//     }
//     inorder(root->left);
//     std::cout<<root->data<<" ";
//     inorder(root->right);
// }
// int main(){
//     Node* root = nullptr;
//     root = insertInBST(root , 5);
//     insertInBST(root , 1);
//     insertInBST(root , 3);
//     insertInBST(root , 4);
//     insertInBST(root , 2);
//     insertInBST(root , 7);
//     inorder(root);
//     std::cout<<std::endl;
//     return 0;
// }
#ifndef BINARY_TREE
#define BINARY_TREE
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
int main()
{
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
    preorder(root);
    std::cout << std::endl;
    // std::cout << size(root) << std::endl;
    // std::cout << sum(root) << std::endl;
    // std::cout << max(root) << std::endl;
    // std::cout << min(root) << std::endl;
    // std::cout << product(root) << std::endl;
    // std::cout << height(root) << std::endl;
    postorder(root);
    std::cout<<std::endl;
    nthLevel(root, 5);
    int level = height(root);
    for(int i = 1; i<= level; i++){
        nthLevel(root,i);
    }
}

#endif