/*To find the inorder predecessor and the postorder successor of the given value*/
#include <iostream>
#include <vector>
class Node
{
public:
    Node *left;
    Node *right;
    int val;
    Node(int val) : left(nullptr), right(nullptr)
    {
        this->val = val;
    }
};

void insert(Node *&root, const int val)
{
    if (not root)
    {
        root = new Node(val);
        return;
    }
    if (root->val > val)
    {
        insert(root->left, val);
    }
    else
    {
        insert(root->right, val);
    }
    return;
}
void inorder(const Node *root)
{
    if (not root)
        return;
    inorder(root->left);
    std::cout << root->val << " ";
    inorder(root->right);
    return;
}


int main()
{
    Node *root = nullptr;
    std::vector<int> arr = {50, 20, 60, 17, 34, 10, 55, 89, 70, 28, 14};
    for (auto it : arr)
    {
        insert(root, it);
    }
    inorder(root);
    std::cout << std::endl;
    // std::cout<<std::boolalpha<<search(root, 12)<< std::endl;
    // deleteNoChild(root, 14);
    
}