#include <iostream>
#include <queue>
class Node{
    public:
    Node* left;
    Node* right;
    bool isVisited;
    int val;
    Node(int data):left(nullptr), right(nullptr) ,isVisited(false), val(data){}
};

/*Amount of Time for Binary Tree to be infected
You are given the root of a binary tree with unique values, and an integer start. At minute 0, an infection starts from the node with value start.
Each minyter, a node becomes infected if:
    The node is cuurently uninfected.
    The node is adjacen to an infected node.abort
Return the number of minutes needed for the entire tree tor be infected.
*/

int amountOfTime(Node* root, int start){

}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
}