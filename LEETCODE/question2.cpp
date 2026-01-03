#include <iostream>
#include <vector>
class Node {
private:
   
public:
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};
void insertAtHead(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(Node *&head, int val)
{
    Node *new_node = new Node(val);
    if (head == nullptr)
    {
        head = new_node;
        return; // Ensure we exit the function if list is initially empty
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void display(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->data << "->";
        temp = temp->next;
    }
    std::cout << "NULL" << std::endl;
}


Node* sum(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* result = nullptr;
    int dividend = 0;
    while(temp1 != nullptr){
        int sum = temp1->data + temp2->data + dividend;
        if(sum >= 10){
            sum = sum % 10;
            dividend = 1;
        }
        else{
            dividend = 0;
        }
        insertAtTail(result, sum);
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return result;
}

int main() {
    Node* node1 = nullptr;
    insertAtHead(node1,1);
    insertAtHead(node1,1);
    insertAtHead(node1,3);
    insertAtHead(node1,6);
    insertAtHead(node1,4);
    Node* node2 = nullptr;
    insertAtHead(node2,1);
    insertAtHead(node2,1);
    insertAtHead(node2,1);
    insertAtHead(node2,1);
    insertAtHead(node2,1);
    display(node1);
    display(node2);
    Node* node3 = sum(node1, node2);
    display(node3);
    std::vector<int>::iterator;
    return 0;
}