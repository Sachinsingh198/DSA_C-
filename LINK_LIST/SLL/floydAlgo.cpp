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
bool detect_cycle(Node* & head){
    if(!head) return false;
    Node* fast = head;
    Node* slow = head;
    bool present = false;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            present = true;
            std::cout<<slow->data<<std::endl;
            return present;
        }
    }
    return present;
}
//Floyd's Algorithm
void remove_cycle(Node*& head){
    Node* slow = head;
    Node* fast = head;
    do{
        slow = slow->next;
        fast = fast->next->next;
    }
        while(slow != fast);;
        fast = head;
    while(fast->next != slow->next){
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = nullptr;

}
bool isPallindrome(Node* & head){
    Node* fast = head;
    Node* slow = head;
    while(fast != nullptr && fast->next != nullptr){
        fast= fast->next->next;
        slow = slow->next;
    }
    Node* prev = nullptr;
    Node* curr = slow->next;
    slow->next = nullptr;
    Node* next = curr->next;
    while()
}
 int main()
{
    Node *new_node = nullptr;
    insert_at_head(new_node, 1);
    insert_at_tail(new_node, 2);
    insert_at_tail(new_node, 4);
    insert_at_tail(new_node, 5);
    insert_at_tail(new_node, 6);
    display(new_node);
    new_node->next->next->next->next->next = new_node->next->next;
    std::cout<<detect_cycle(new_node)<<std::endl;
    if(detect_cycle(new_node)){
        remove_cycle(new_node);
    }
    std::cout<<detect_cycle(new_node)<<std::endl;;
    display(new_node);
    return 0;
}
