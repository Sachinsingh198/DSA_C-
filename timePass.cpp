#include <iostream>

class Node
{
private:
    /* data */
public:
    Node* right;
    Node* left;
    int val;
    Node(int data): right(nullptr), left(nullptr), val(data) {};
    ~Node();
};
int maxHeight(Node* root){
    if(!root) return 0;
    if(not root->left and not root->right) return 0;
    return 1 + std::max(maxHeight(root->left), maxHeight(root->right));
}
int main(){
    Node* root = new Node(10);
    root->left = new Node(5);  
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->left->right = new Node(2);
    root->right->left = new Node(7);
    root->right->right = new Node(1);
    root->right->left->left = new Node(8);
    std::cout<<maxHeight(root);
}
