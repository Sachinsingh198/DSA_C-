#include "BINARY_TREE.h"
#include <iostream>
#include <vector>

bool is_balanced(const Node *root)
{
    if (root == nullptr)
        return true;
    int lh = height(root->left);
    if (root->left != nullptr)
        lh++;
    int rh = height(root->right);
    if (root->right != nullptr)
        rh++;
    int d = lh - rh;
    if (d < 0)
        d = -d;
    if (d > 1)
        return false;
    return is_balanced(root->left) and is_balanced(root->right);
}

bool isSameTree(Node *p, Node *q)
{
    if ((not p) and (not q))
        return true;
    if (!p or !q)
        return false;
    // if(not q) return false;
    if (p->val != q->val)
        return false;
    return isSameTree(p->left, q->left) and isSameTree(p->right, q->right);
}

// print all the possible paths of the binary tree from the root node to the leaf node of the binary tree
void helper(std::vector<std::string> &path, std::string str, Node *root)
{
    // Base case: if the node is null, return
    if (!root)
    {
        return;
    }

    // Append the current node's value to the path string
    str += std::to_string(root->val);

    // If it's a leaf node, add the current path to the result
    if (root->left == nullptr and root->right == nullptr)
    {
        path.push_back(str); // No need to append '->' for leaf nodes
    }
    else
    {
        // Otherwise, continue the path with '->' and recurse
        helper(path, str + "->", root->left);
        helper(path, str + "->", root->right);
    }
}

std::vector<std::string> binaryTreePath(Node *root)
{
    std::vector<std::string> path;
    helper(path, "", root);
    return path;
}


/*Lowest common ancestor of a binary tree
Given a binary tree , find the lowest common ancestor of two given nodes in the tree
*/
bool contains(Node *root, Node *node)
{
    if(not root) return false;
    if(root == node) return true;
    return  contains(root->left, node) or contains(root->right,node);
}
Node *lowest_common_ancestor(Node *root, Node *p, Node *q)
{
    if (p == root or q == root)
        return root;
    if (p == q)
        return p;
    bool leftP = contains(root->left, p);
    bool rightQ = contains(root->right, q);
    if ((leftP and rightQ) or (not leftP and  not rightQ))
        return root; // when p in the left subtree and q is in the right subtree or p is neither in the left subtree nor in the right subtree
    if (leftP and (not rightQ))
    { // when both p and q are present in the left subtree
        return lowest_common_ancestor(root->left, p, q);
    }
    if (not leftP and rightQ)
    { // when both p and q are present in the right subtree
       return lowest_common_ancestor(root->right, p, q);
    }
    return root;
}


Node* invertBinaryTree(Node* root){
    if(root == nullptr) return root;
    Node* l = root->left;
    Node* r = root->right;
    root->left = invertBinaryTree(r);
    root->right = invertBinaryTree(l);
    return root;
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
    root->left->left->left = new Node(8);//
    root->left->left->right = new Node(9);//
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(11);
    root->right->left->left = new Node(12);
    root->right->left->right = new Node(13);
    root->right->right->left = new Node(14);
    root->right->right->right = new Node(15);

    // Node *root1 = new Node(1);
    // root1->left = new Node(2);
    // root1->right = new Node(3);
    // root1->left->left = new Node(4);
    // root1->left->right = new Node(5);
    // root1->right->left = new Node(6);
    // root1->right->right = new Node(7);
    // // root->left->left->left = new Node(8);
    // // root->left->left->right = new Node(9);
    // // root->left->right->left = new Node(10);
    // // root->left->right->right = new Node(11);
    // // root->right->left->left = new Node(12);
    // // root->right->left->right = new Node(13);
    // // root->right->right->left = new Node(14);
    // // root->right->right->right = new Node(15);
    // std::cout << std::boolalpha << isSameTree(root, root1) << std::endl;
    // std::vector<std::string> path = binaryTreePath(root);
    // std::cout << "[ ";
    // for (auto it : path)
    // {
    //     std::cout << it << " ,";
    // }
    // std::cout << "]" << std::endl;

    Node* ancestor = lowest_common_ancestor(root,root->left->left->left,root);
    std::cout<<ancestor->val<<std::endl;

}