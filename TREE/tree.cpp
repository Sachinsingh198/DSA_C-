/*
Properties of Binary tree
1. Maximum nodes at n level = 2^n nodes
2. Maximum nodes in a tree of height H is 2^h - 1
3. For n nodes , minumumum possible height or minimum numbers of levels are log base2 (n + 1).
4. A binary tree wiht l leaves has at least log base2 (n + 1) number of levels.
*/
// #include <iostream>
// struct Node{
//     int data;
//     struct Node* left;
//     struct Node* right;
//     Node(int val): left(nullptr), right(nullptr),data(val) {} 
// };
// class TreeNode {
// private:
   
// public:
// };
// int main() {
//     struct Node* root = new Node(1);
//     struct Node* left = new Node(2);
//     struct Node* right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     return 0;
// }

#include <iostream>
#include <stack>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void postOrder(Node* root) {
    if (root == nullptr) return;
    
    stack<Node*> s1, s2;
    s1.push(root);

    while (!s1.empty()) {
        Node* node = s1.top();
        s1.pop();
        s2.push(node);

        if (node->left) s1.push(node->left);
        if (node->right) s1.push(node->right);
    }

    while (!s2.empty()) {
        Node* node = s2.top();
        s2.pop();
        cout << node->data << " ";
    }
}
void inOrder(Node* root) {
    stack<Node*> s;
    Node* curr = root;

    while (curr != nullptr || !s.empty()) {
        while (curr != nullptr) {
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();
        cout << curr->data << " ";

        curr = curr->right;
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Post-order traversal: ";
    postOrder(root);
    cout << "In-order traversal: ";
    inOrder(root);
    return 0;
}

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int key;
//     Node *left;
//     Node *right;
//     int height;
//     Node(int k) : key(k), left(nullptr), right(nullptr), height(1) {}
// };

// int height(Node *N) {
//     return (N == nullptr) ? 0 : N->height;
// }

// int max(int a, int b) {
//     return (a > b) ? a : b;
// }

// Node* rightRotate(Node *y) {
//     Node *x = y->left;
//     Node *T2 = x->right;
//     x->right = y;
//     y->left = T2;
//     y->height = max(height(y->left), height(y->right)) + 1;
//     x->height = max(height(x->left), height(x->right)) + 1;
//     return x;
// }

// Node* leftRotate(Node *x) {
//     Node *y = x->right;
//     Node *T2 = y->left;
//     y->left = x;
//     x->right = T2;
//     x->height = max(height(x->left), height(x->right)) + 1;
//     y->height = max(height(y->left), height(y->right)) + 1;
//     return y;
// }

// int getBalance(Node *N) {
//     return (N == nullptr) ? 0 : height(N->left) - height(N->right);
// }

// Node* insert(Node* node, int key) {
//     if (node == nullptr)
//         return (new Node(key));

//     if (key < node->key)
//         node->left = insert(node->left, key);
//     else if (key > node->key)
//         node->right = insert(node->right, key);
//     else
//         return node;

//     node->height = 1 + max(height(node->left), height(node->right));

//     int balance = getBalance(node);

//     if (balance > 1 && key < node->left->key)
//         return rightRotate(node);

//     if (balance < -1 && key > node->right->key)
//         return leftRotate(node);

//     if (balance > 1 && key > node->left->key) {
//         node->left = leftRotate(node->left);
//         return rightRotate(node);
//     }

//     if (balance < -1 && key < node->right->key) {
//         node->right = rightRotate(node->right);
//         return leftRotate(node);
//     }

//     return node;
// }

// Node* minValueNode(Node* node) {
//     Node* current = node;
//     while (current->left != nullptr)
//         current = current->left;
//     return current;
// }

// Node* deleteNode(Node* root, int key) {
//     if (root == nullptr)
//         return root;

//     if (key < root->key)
//         root->left = deleteNode(root->left, key);
//     else if (key > root->key)
//         root->right = deleteNode(root->right, key);
//     else {
//         if ((root->left == nullptr) || (root->right == nullptr)) {
//             Node *temp = root->left ? root->left : root->right;
//             if (temp == nullptr) {
//                 temp = root;
//                 root = nullptr;
//             } else
//                 *root = *temp;
//             delete temp;
//         } else {
//             Node* temp = minValueNode(root->right);
//             root->key = temp->key;
//             root->right = deleteNode(root->right, temp->key);
//         }
//     }

//     if (root == nullptr)
//         return root;

//     root->height = 1 + max(height(root->left), height(root->right));
//     int balance = getBalance(root);

//     if (balance > 1 && getBalance(root->left) >= 0)
//         return rightRotate(root);
//     if (balance > 1 && getBalance(root->left) < 0) {
//         root->left = leftRotate(root->left);
//         return rightRotate(root);
//     }
//     if (balance < -1 && getBalance(root->right) <= 0)
//         return leftRotate(root);
//     if (balance < -1 && getBalance(root->right) > 0) {
//         root->right = rightRotate(root->right);
//         return leftRotate(root);
//     }

//     return root;
// }

// void preOrder(Node *root) {
//     if (root != nullptr) {
//         cout << root->key << " ";
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }

// int main() {
//     Node *root = nullptr;

//     root = insert(root, 9);
//     root = insert(root, 5);
//     root = insert(root, 10);
//     root = insert(root, 0);
//     root = insert(root, 6);
//     root = insert(root, 11);


//     cout << "Preorder traversal of the constructed AVL tree is \n";
//     preOrder(root);

//     root = deleteNode(root, 10);
//     cout << "\nPreorder traversal after deletion of 10 \n";
//     preOrder(root);

//     return 0;
// }
