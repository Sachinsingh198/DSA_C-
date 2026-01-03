#include <bits/stdc++.h>
#include "BINARY_TREE.h"

int diameterOfBinaryTree(Node *root)
{
    if(not root  || (not root->left and not root->right)) return 0;
    int leftAns = diameterOfBinaryTree(root->left);
    int rightAns = diameterOfBinaryTree(root->right);
    int mid = height(root->left) + height(root->right);
    if (root->left)
        mid++;
    if (root->right)
        mid++;
    return std::max(mid, std::max(leftAns, rightAns));   
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(11);
    root->right->left->left = new Node(12);
    root->right->left->right = new Node(13);
    root->right->right->left = new Node(14);
    root->right->right->right = new Node(15);
    int diameter = diameterOfBinaryTree(root);
    std::cout << diameter << std::endl;
}