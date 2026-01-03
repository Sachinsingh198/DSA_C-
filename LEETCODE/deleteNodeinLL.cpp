#include <iostream>
class Node
{
private:
public:
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

void insert_at_head(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void insert_at_tail(Node *&head, int val)
{
    if (head == nullptr)
    {
        insert_at_head(head, val);
        return;
    }
    Node *new_node = new Node(val);
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = nullptr;
}

void insert_at_position(Node *&head, int val, int pos)
{
    Node *temp = head;
    Node *new_node = new Node(val);
    int count = 0;
    while (temp != nullptr && count < pos - 2)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void display(Node *&head)
{
    Node *temp = head;
    while (temp)
    {
        std::cout << temp->data << "->";
        temp = temp->next;
    }
    std::cout << "NULL" << std::endl;
}


void deleteNode(Node* node) {
        if(node == nullptr || node->next == nullptr){
            return;
        }
        Node* nxt = node->next;
        node->data = nxt->data;
        node->next = nxt->next;
        delete nxt;
    }
int main(){

    return 0;
}