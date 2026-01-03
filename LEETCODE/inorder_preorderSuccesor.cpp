#include <iostream>
#include <vector>
class Node{
    public:
    Node* left;
    Node* right;
    int data;
    Node(int val): left(nullptr), right(nullptr), data(val){};
};

void insert(Node*& root, const int& val){
    if(!root){
        root = new Node(val);
        return;
    }
    if(val < root->data){
        insert(root->left, val);
    }
    else{
        insert(root->right, val);
    }
}

int inorderPred(Node*& root, Node* node, std::vector<int>& ans){
    if(not root) return 0;
    while(root->data != node->data){
        if(not root) return;
        inorderPred(root->left, node, ans);
        ans.push_back(root->data);
        inorderPred(root->right, node, ans);
    }
    return ans[ans.size() - 1];
}
void inorder(Node*& root, std::vector<int>& arr){
    if(not root) return ;
    inorder(root->left,arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}
int main(){
    Node *root = nullptr;
    std::vector<int> arr = {50, 20, 60, 17, 34, 10, 55, 89, 70, 28, 14};
    std::vector<int> ans = {};
    for (auto it : arr)
    {
        insert(root, it);
    }
    inorder(root, arr);
    Node* target = root->left->right->right;
    
}