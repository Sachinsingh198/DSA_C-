#include <iostream>
#include <vector>
class Node{
    public:
    Node* left;
    Node* right;
    int data;
    Node(int val): left(nullptr), right(nullptr) , data(val){}
};

/*Given the node of binary tree and an integer targetsum, return all root-to-leaf paths where the sum of the node values in the path equals targetsum. Each path should be returned as a list of the node values, not node references.
A root-to-leaf path is a path starting from the root and ending at any leaf node. A lead ia a node with no children.
*/

void helper(Node* root,std::vector<int>arr, std::vector<std::vector<int>>& result, int targetSum){
    if(not root) return;
    arr.push_back(root->data);
    if(not root->left && not root->right){
        int sum = 0;
        for(const auto& val: arr){
            sum += val;
        }
        if(sum == targetSum) result.push_back(arr);
        
    }
    else{
    helper(root->left, arr, result, targetSum);
    helper(root->right, arr, result, targetSum);
    }
    arr.pop_back();
    
}
void helperII(Node* root,std::vector<int>arr, std::vector<std::vector<int>>& result, int sum){
    if(!root) return;
    if(not root->left and not root->right){
        arr.push_back(root->data);
        if(root->data == sum) {
            std::vector<int> a;
            for(int i = 0; i< arr.size(); i++){
                a.push_back(arr[i]);
            }
            result.push_back(a);
        }
        arr.pop_back();
        return;
    }
    arr.push_back(root->data);
    helperII(root->left, arr, result, sum - root->data);
    helperII(root->right, arr, result, sum - root->data);
    arr.pop_back();
}
std::vector<std::vector<int>> pathSum(Node* root, int targetSum){
    std::vector<std::vector<int>> result;
    std::vector<int> arr;
    helperII(root, arr, result, targetSum);
    return result;
}


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    std::vector<std::vector<int>> result = pathSum(root, 7);
    for(const auto &values: result){
        for(const auto& value: values){
            std::cout<<value<<" ";
        }
    }
    std::cout<<std::endl;
}