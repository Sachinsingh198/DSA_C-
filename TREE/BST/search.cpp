#include <iostream>
#include <vector>
#include <climits>
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

bool search(const Node *root, const int val)
{
    if (not root)
        return false;
    if (root->val == val)
        return true;
    if (root->val > val)
    {
        search(root->left, val);
    }
    else
    {
        search(root->right, val);
    }
}

/*Deletion in a Binary Search Tree*/
/*When target node has no child*/
void deleteNode(Node *root, const int target)
{
    if (not root)
        return;
    if (not root->left and not root->right)
        return;

    if (root->val > target)
    {
        if (not root->left)
            return;
        if (root->left->val == target)
        { // for 0 children
            if (not root->left->left and not root->left->right)
            {
                root->left = nullptr;
            }
            else if (not root->left->left or not root->left->right)
            { // for 1 child
                if (root->left->left)
                {
                    root->left = root->left->left;
                }
                else
                {
                    root->left = root->left->right;
                }
            }
            else
            {
                Node *curr = root->left;
                Node *pred = curr->left;
                while (pred->right)
                    pred = pred->right; // To find the inorder predecessor of the root
                deleteNode(root, pred->val);
                pred->left = curr->left;
                pred->right = curr->right;
                root->left = pred;
            }
        }
        else
            deleteNode(root->left, target);
    }
    else
    {
        if (not root->right)
            return;
        if (root->right->val == target)
        { // for 0 childere
            if (not root->right->left and not root->right->right)
            {
                root->right = nullptr;
            }
            else if (not root->right->left or not root->right->right)
            { // for 1 child
                if (root->right->right)
                {
                    root->right = root->right->right;
                }
                else
                {
                    root->right = root->right->left;
                }
            }
            else
            {
                Node *curr = root->right;
                Node *pred = curr->left;
                while (pred->right)
                    pred = pred->right; // To find the inorder predecessor of the root
                deleteNode(root, pred->val);
                pred->left = curr->left;
                pred->right = curr->right;
                root->left = pred;
            }
        }
        else
            deleteNode(root->right, target);
    }
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
    Node *temp = new Node(INT_MAX);
    temp->left = root;

    deleteNode(temp, 20);
    inorder(temp->left);
}