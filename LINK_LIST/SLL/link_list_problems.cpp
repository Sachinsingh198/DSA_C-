// /*Give  the head a linked lisr, delete every alternate element from the list startinf from the second element*/

// #include <iostream>
// class Node
// {
// private:
// public:
//     Node *next;
//     int val;
//     Node(int data) : val(data), next(NULL) {};
// };

// class LinkedList
// {
// public:
//     Node* head;
//     LinkedList():head(NULL){}
//     void insertAtTail(int val){
//         Node* new_node = new Node(val);
//         if(head == NULL){
//             head = new_node;
//             return;
//         }
//         Node* temp = head;
//         while(temp->next != NULL){
//             temp = temp->next;
//         }
//         temp->next = new_node;
//     }
//     void display(void){
//         Node* temp = head;
//         while(temp != NULL){
//             std::cout<<temp->val<<"-->";
//             temp = temp->next;
//         }
//         std::cout<<std::endl;
//     }
// };
// int main()
// {
//     return 0;
// }

#include <iostream>
#include <algorithm>
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};
void insert(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}
void display(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->val << "->";
        temp = temp->next;
    }
    std::cout << "NULL" << std::endl;
}
void alternatively(Node *&head)
{
    Node *curr = head;
    while (curr->next != nullptr || curr == nullptr)
    {
        Node *temp = curr->next;
        curr->next = curr->next->next;
        free(temp);
        curr = curr->next;
    }
}
void delete_repeat(Node *&head)
{
    Node *curr = head;
    while (curr)
    {
        while (curr->next && curr->val == curr->next->val)
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        }
        curr = curr->next;
    }
}
// print the elements of the linked list int reversed manner
void print_reverse(Node *&head)
{
    if (head == nullptr)
    {
        return;
    }
    print_reverse(head->next);
    std::cout << head->val << "->";
}

Node *reverse(Node *&head)
{
    Node *current = head;
    Node *prev = nullptr;
    while (current)
    {
        Node *nextptr = current->next;
        current->next = prev;
        prev = current;
        current = nextptr;
        // nextptr = nextptr->next;
    }
    // prev pointer is pointing to last node which is new head;
    Node *new_head = prev;
    return new_head;
}

Node* reverse_k_node(Node*& head, int k) {
    Node* current = head;
    Node* prev = nullptr;
    int counter = 0;
    
    // Reverse k nodes of the linked list
    while (current != nullptr && counter < k) {
        Node* nextptr = current->next;
        current->next = prev;
        prev = current;
        current = nextptr;
        counter++;
    }

    // Now head points to the k-th node. We need to
    // change the next of head to the (k+1)th node after
    // reversing the next k nodes
    if (current != nullptr) {
        head->next = reverse_k_node(current, k);
    }

    // prev is the new head of the input list
    head = prev;

    return head;
}

Node *reverse_recursive(Node *&head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    // recursive case
    Node *new_node = reverse_recursive(head->next);
    head->next->next = head;
    head->next = nullptr;
    return new_node;
}

int main()
{
    Node *h = nullptr;
    insert(h, 5);
    insert(h, 5);
    insert(h, 5);
    insert(h, 4);
    insert(h, 4);
    insert(h, 4);
    insert(h, 3);
    insert(h, 3);
    insert(h, 3);
    insert(h, 2);
    insert(h, 2);
    insert(h, 2);
    insert(h, 1);
    insert(h, 1);
    display(h);
    delete_repeat(h);
    // alternatively(h);
    display(h);
    print_reverse(h);
    std::cout << "NULL" << std::endl;
    Node *new_node = reverse_recursive(h);
    display(new_node);
    Node *n = reverse_k_node(h, 2);
    display(n);
}