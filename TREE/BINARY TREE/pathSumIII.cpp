#include <iostream>
#include <vector>
class Node{
    public:
    Node* left;
    Node* right;
    int data;
    Node(int val): left(nullptr), right(nullptr) , data(val){}
};


/*Given the root of a binary tree nd an integer targetSum, return the number of paths where the sum of the values along the path equals targetSum
The path does not need to start or end the the root or a leaf, but it must go downwards(i.e., treavelling only from parent nodes to the chile nodes)*/
int noOfPath(Node* root, int targetSum){
    if(not root) return 0;
    int count = 0;
    if(root->data == targetSum) count++;
    return count + noOfPath(root->left, targetSum - root->data) + noOfPath(root->right, targetSum - root->data);
}

int pathSum(Node* root, int targetSum){
    if(root == nullptr) return 0;
    int count = noOfPath(root, targetSum);
    count += (pathSum(root->left, targetSum) + pathSum(root->right, targetSum));
    return count;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    std::cout<<pathSum(root, 7); // Output: 2
    return 0;
}