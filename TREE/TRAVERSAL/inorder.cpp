/*
INORDER
1. Left subtree
2. Root
3. Right subtree
Left -> Root -> Right
*/

#include <iostream>
struct Node
{
    Node *right;
    Node *left;
    int data;
    Node(int data) : right(nullptr), left(nullptr) { this->data = data; }
};
void inorder(struct Node *root)
{
    if (root == nullptr)
        return;
    inorder(root->left);
    inorder(root->right);
    std::cout << root->data << " ";
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    inorder(root);
    return 0;
}
