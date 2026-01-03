/*
POSTORDER
1. Left subtree
2. Right subtree
3. Root
Left -> Right -> Root 
*/
#include <iostream>
struct Node{
    Node* right;
    Node* left;
    int data;
    Node(int value): left(nullptr), right(nullptr), data(value){}
};
void postorder(struct Node* root){
    if(root == nullptr) return;  // Base case: empty tree or null node
    postorder(root->left);
    postorder(root->right);
    std::cout<<root->data<<" ";  // Prints: 4 5 2 6 7 3 1
    
}
int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    postorder(root);
    return 0;
}