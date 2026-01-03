#include <iostream>
class Node{
    public:
    Node* left;
    Node* right;
    int data;

    Node(int val):left(nullptr), right(nullptr),data(val) {}
};
/*Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum*/

bool hasPathSum(Node* root, int targetSum){
    if(not root) return false;
    if(root and (not root->left) and (not root->right)){
        if(root->data == targetSum) return true;
    }
    // return (hasPathSum(root->left, targetSum) + root->data) == (hasPathSum(root->right, targetSum) + root->data);
    return hasPathSum(root->left, targetSum - root->data) || hasPathSum(root->right, targetSum - root->data);
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    bool flag = hasPathSum(root, 5);
    std::cout<<std::boolalpha<<hasPathSum(root, 5);
}