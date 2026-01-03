#include <iostream>
class Node{
    public:
    Node* left;
    Node* right;
    int val;
    Node(int data): left(nullptr),right(nullptr), val(data) {}
};

/*Flatten Binary Tree to the Linked list
Fiven the root of a binary tree , flatten the tree into a linked lis
1). The linked list should use the same Node class where the right child pointer points to the next node in tlist and the left child pointer is always null
2). The linked list should be in the same order as a pre-order traversal of a binary tree
*/
void flatten(Node* root) {
    if (!root) return;
    
    Node* left = root->left;
    Node* right = root->right;
    
    flatten(left);
    flatten(right);
    
    root->left = nullptr; // Correct the assignment
    
    root->right = left; // Assign the left subtree to the right of the root
    
    // Find the end of the new right subtree
    Node* temp = root;
    while (temp->right) {
        temp = temp->right;
    }
    
    temp->right = right; // Attach the original right subtree to the end of the new right subtree
}

/*Using Morris traversal (it is an iterative way to flatten the tree in its place)
    if(curr->left){
    Node* predecessor = curr->left}
    */

void flatten_morris(Node*root){
    Node* curr = root;
    while(curr){
        if(curr->left){
            Node* predecessor = curr->left;
            while(predecessor->right){
                predecessor = predecessor->right;
            }
            predecessor->right = curr->right;
            curr->right = curr->left;
            curr->left = nullptr;
        }
        curr = curr->right;
    }
    root= curr;
}
void preorder(const Node* root){
    if(root == nullptr) return;
    std::cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // flatten(root);
    // preorder(root);
    // std::cout<<std::endl;
    flatten_morris(root);
    while(root){
        std::cout<<root->val<<" ";
        root = root->right;
    }
    while(root){
        std::cout<<root->val<<" ";
        root = root->left;
    }
}