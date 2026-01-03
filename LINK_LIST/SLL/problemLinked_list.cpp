#include <iostream>
#include <bits/stdc++.h>
class Node
{
public:
    Node *next;
    int data;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
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

bool compare(Node *&head1, Node *&head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    while (temp1 != nullptr && temp2 != nullptr)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    // Check if both lists are of the same length
    return (temp1 == nullptr && temp2 == nullptr);
}

int calculate_length(Node *head)
{
    Node *temp = head;
    int length = 0;
    while (temp != nullptr)
    {
        temp = temp->next;
        length++;
    }
    return length;
}

Node *move_head_by_K(Node *head, int k)
{
    Node *ptr = head;
    while (k-- && ptr != nullptr)
    {
        ptr = ptr->next;
    }
    return ptr;
}

Node *intersection(Node *&head1, Node *&head2)
{
    // Step 1 => Calculate the length of both linked lists
    int length1 = calculate_length(head1);
    int length2 = calculate_length(head2);

    Node *temp1 = head1;
    Node *temp2 = head2;

    // Step 2 => Move the longer list pointer by k steps
    if (length1 > length2)
    {
        int k = length1 - length2;
        temp1 = move_head_by_K(temp1, k);
    }
    else
    {
        int k = length2 - length1;
        temp2 = move_head_by_K(temp2, k);
    }

    // Step 3 => Compare pointers of both nodes
    while (temp1 != nullptr && temp2 != nullptr)
    {
        if (temp1 == temp2)
        {
            return temp1;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return nullptr;
}

// Given a head of a linked list, remove the k-th node from the end of the list and return its head
Node *removeFromBack(Node *&head, int k)
{

    // By traversing our linked list twice.
    //  Node* temp = head;
    //  int count;
    //  while(temp != nullptr){
    //      temp = temp->next;
    //      count++;
    //  }
    //  free (temp);
    //  int kth = k - count;
    //  int new_count = 0;
    //  temp = head;
    //  while(temp != nullptr && kth == new_count){
    //      temp = temp->next;
    //  }
    //  Node* new_node = temp->next;
    //  temp->next = temp->next->next;
    //  return temp;

    // By traversing our linked list once.
    Node *temp = head;
    Node *temp_k = head;
    int count = k;
    // move temp_k by k steps ahead of temp or Two pointers approach.
    while (count--)
    { // count != 0
        temp_k = temp_k->next;
    }

    // now temp_k is pointing to the node before kth node from end
    // node to be deleted is temp1->next.
    while (temp_k->next != nullptr)
    {
        temp = temp->next;
        temp_k = temp_k->next;
    }
    Node *new_node = temp->next;
    temp->next = temp->next->next;
    free(new_node);
    return temp;
}

// Given 2 sorted linked lists , merge them into 1 singly linked list such that the resultin list is also sorted.
Node *merge_sorted_ll(Node *&head1, Node *&head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    Node *new_head = nullptr;
    while (temp1 && temp2)
    {
        if (temp1->data > temp2->data)
        {
            insertAtTail(new_head, temp2->data);
            temp2 = temp2->next;
        }
        else
        {
            insertAtTail(new_head, temp1->data);
            temp1 = temp1->next;
        }
    }
    while (temp1 != nullptr)
    {
        insertAtTail(new_head, temp1->data);
        temp1 = temp1->next;
    }
    while (temp2 != nullptr)
    {
        insertAtTail(new_head, temp2->data);
        temp2 = temp2->next;
    }
    return new_head;
}

//Given array of k linked lists which are arrange in sorted manner, retrun a new linked list in which all the lisked list are merged in sorted manner
Node* merge_K_ll(std::vector<Node* >& arr){
    Node* new_node = nullptr;
    
    while(arr.size()>1){
        int i = 0;
        new_node = merge_sorted_ll(arr[i], arr[i + 1]);
        arr.push_back(new_node);
        arr.erase(arr.begin());
        arr.erase(arr.begin());
    }
    return arr[0];
}

//Find the middle element of the given linked list
Node *FindMiddle(Node*& head){
    Node* slow = head;
    Node* fast = head;
    while(fast!= nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        
    }
    return slow;
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

int main()
{
    Node* new_node = new Node(1);
    insertAtTail(new_node,2);
    insertAtTail(new_node,3);
    insertAtTail(new_node,4);
    insertAtTail(new_node,5);
    insertAtTail(new_node,6);
    display(new_node);
    new_node->next->next->next->next->next = new_node->next->next;
    // Node* middleNode = FindMiddle(new_node);
    // std::cout<<middleNode->data<<std::endl;
    std::cout<<detect_cycle(new_node)<<std::endl;
    display(new_node);
    return 0;
}


