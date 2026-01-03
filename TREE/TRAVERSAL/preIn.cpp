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

// Given inorder and preorder of the binary tree and have to find the postorder of the node
Node *helper_inorder(std::vector<int> &pre, int prelo, int prehi, std::vector<int> &in, int inlo, int inhi)
{
    if (prelo > prehi)
        return nullptr;
    Node *root = new Node(pre[prelo]);
    int i = inlo;
    while (in[i] != pre[prelo])
        i++;
    int leftsize = i - inlo;
    root->left = helper_inorder(pre, prelo + 1, prelo + leftsize, in, inlo, i - 1);
    root->right = helper_inorder(pre, prelo + leftsize + 1, prehi, in, i + 1, inhi);
    return root;
}
Node *inorderNode(std::vector<int> &pre, std::vector<int> &in)
{
    return helper_inorder(pre, 0, pre.size() - 1, in, 0, in.size() - 1);
}


// Node* kuchBhi(std::vector<int>& pre, int prelo, int prehi, std::vector<int>& in, int inlo, int inhi){
//     if(prelo > prehi) return nullptr;
//     Node* root = new Node(pre[prelo]);
//     int i = inlo;
//     while(in[i] != root->data) i++;
//     int leftSize = i - inlo;
//     root->left = kuchBhi(pre, prelo + 1, prelo + leftSize, in, inlo, i - 1);
//     root->right = kuchBhi(pre, prelo + leftSize + 1, prehi, in, i + 1, inhi);
//     return root;
// }
// Node* tree(std::vector<int>& pre, std::vector<int>& in){
//     Node* node = kuchBhi(pre, 0, pre.size() - 1, in, 0, in.size() - 1);
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
int main()
{
    std::vector<int> pre = {1, 2, 4, 5, 3, 6, 7};
    std::vector<int> in = {4, 2, 5, 1, 6, 3, 7};
    std::vector<int> post = {4,5,2,6,7,3,1};
    // Node *postp = tree(pre, in);
    // postorder(postp);
}
