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

// Node* reverse_linked_list(Node*& head){
//     Node* curr = head;
//     Node* prev = nullptr;
//     while(curr){
//         Node* nxt = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = nxt;
//         curr = curr->next;

//     }
//     return prev;
// }
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
bool is_pallindrome(Node*& head){
    Node* counter = head;
    Node* slow = head; 
    Node* fast = head;
    int count = 0;
    while(counter){
        counter = counter->next;
        count++;
    }
    int mid;
    if((count + 1) % 2 == 0){
        mid = count / 2;
    }
    else{
        mid = (count / 2) + 1;
    }
    count = 0;
    while(count != mid){
        fast = fast->next;
        count++;
    }
}

bool isPallindrom(Node*& head){
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* curr = slow->next;
    Node* prev = slow;
    slow->next = nullptr;
    while(curr){
        Node* nxt = curr->next;
        curr->next = prev;
        prev  = curr;
        curr = nxt;
    }
    Node* head1 = head;
    Node* head2 = prev;
    while(head2){
        if(head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}


Node* rotateBy_k(Node*& head, int k){
    Node* tail = head;
    int n = 0;
    while(tail){
        tail = tail->next;
        n++;
    }
    n++;
    k = k%n;
    if(k == n){
        return head;
    }
    tail->next = head;
    Node* temp = head;
    for(int i = 1; i<n - k; i++){
        temp = temp->next;
    }
    Node* new_head = temp->next;
    temp->next = nullptr;
    return new_head;
}
int main()
{
    Node *new_node = nullptr;
    insert_at_head(new_node, 1);
    insert_at_tail(new_node, 2);
    insert_at_tail(new_node, 3);
    insert_at_tail(new_node, 4);
    insert_at_tail(new_node, 3);
    insert_at_tail(new_node, 2);
    insert_at_tail(new_node, 1);
    display(new_node);
    insert_at_position(new_node, 3, 3);
    display(new_node);
    std::cout<< isPallindrom(new_node)<<std::endl;
    return 0;
}