// #include "Traversel.h"
// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
class Node
{
public:
    Node *left;
    Node *right;
    int data;
    Node(int val) : left(nullptr), right(nullptr), data(val) {}
};



// Given the inorder and the postorder of the binary tree and we have to find the preorder of the tree

Node* helper(std::vector<int>& in, int inlo, int inhi, std::vector<int>& post, int postlo, int posthi){
    if(inlo > inhi || postlo > posthi) return nullptr;
    Node* root = new Node(post[posthi]);
    int i = inlo;
    while(in[i] != root->data) i++;
    int leftSize = i - inlo;
    // int rightSize = posthi - i;
    root->left = helper(in, inlo, i - 1, post, postlo, postlo + leftSize - 1);
    root->right = helper(in, i + 1, inhi, post, postlo + leftSize, posthi - 1);

    return root;
}
Node *TreeNode(std::vector<int> &in, std::vector<int> &post)
{
    return helper(in, 0, in.size() - 1, post, 0, post.size() - 1);
}

// Node* tree(std::vector<int>& in, int inlo, int inhi, std::vector<int>& post, int postlo, int posthi){
//     if(inlo > inhi or postlo > posthi) return nullptr;
//     Node* root = new Node(post[posthi]);
//     int i = inlo;
//     while(in[i] != root->data) i++;
//     int leftSize = i - inlo;
//     root->left = tree(in, inlo, i - 1, post,postlo, postlo + leftSize - 1);
//     root->right = tree(in, i + 1, inhi, post, postlo + leftSize, posthi - 1);
//     return root;
// }
// Node* pre(std::vector<int>& in, std::vector<int>& post){
//     Node* node = tree(in, 0, in.size() -1, post, 0, post.size() - 1);
//     return node;
// }

void postorder(Node *root)
{
    if (root == nullptr)
        return;
    postorder(root->left);
    postorder(root->right);
    std::cout << root->data << " ";
}

void inorder(Node* root){
    if(not root) return;
    inorder(root->left);
    std::cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node *root)
{
    if (!root)
        return;
    std::cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    std::vector<int> preo = {1, 2, 4, 5, 3, 6, 7};
    std::vector<int> in = {4, 2, 5, 1, 6, 3, 7};
    std::vector<int> post = {4,5,2,6,7,3,1};
    // Node* preN = pre(in, post);
    // preorder(preN);
}

