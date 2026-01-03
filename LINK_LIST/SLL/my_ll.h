#ifndef MY_LL_H
#define MY_LL_H

#include <bits/stdc++.h>
class Node {
private:
   
public:
    int data;
    Node* next;//pointer to the next node
    Node(int value): data(value), next(NULL){} 
};

/*INSERT ANY ITEM AT THE FIRST OR HEAD*/
void insertAtHead(Node* &head, int value){
    Node* n = new Node(value);
    n->next = head;
    head = n;
}

/*SEARCH VALUE AT ANY NODE*/
bool search(Node* head, int value){
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->data == value){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

/*INSERT AT THE TAIL OF THE LINKED LIST*/
void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);
    if(head == NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;

}

/*DISPLAY THE COMPLETE LINKED LIST*/
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        std::cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    std::cout<<"NULL"<<std::endl;
}

/*DELETETION IN THE LINKED LIST*/
void deletion(Node* &head, int val) {
    if (head == nullptr) return;  // Check if the list is empty

    if (head->data == val) {  // Check if the node to delete is the head
        Node* todelete = head;
        head = head->next;
        delete todelete;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != val) {
        temp = temp->next;
    }

    if (temp->next == nullptr) {  // Value not found in the list
        return;
    }

    Node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

//Reversing a linked list using an iterator
Node* reverse(Node* &head){
    Node* currentptr = head;
    Node* previousptr = NULL;//new head of the linked list
    Node* nextptr = currentptr->next;
    while(currentptr != NULL){
        nextptr = currentptr->next;
        currentptr->next = previousptr;

        previousptr = currentptr;
        currentptr = nextptr;
    }
    return previousptr;//returns the new head of the linked list
}

//REversing k nodes of a linked list
Node* reverse_k(Node*& head, int k){
    Node* currptr = head;
    Node* prevptr = NULL;
    Node* nextptr;
    int count = 0;
    while(currptr != NULL && count <k){
        nextptr - currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if(nextptr != NULL){
        head->next = reverse_k(nextptr, k);
            }
    return prevptr;
}

int length(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp){
        temp = temp->next;
        n++;
    }
    return n;
}

/*GIVEN THE HEAD OF A LINKED LIST , ROTATE THE LIST TO THE RIGHT BY K PLACE*/
Node* rotate_list(Node* head,int k){
    Node* temp = head;
    //Find the length of the linked list (n)
    int n = length(temp);
    if(n == 0){
        return nullptr;
    }
    k = k % n;
    if(k == 0){
        return temp;
    }
    //Taverse the linked list to find the tail
    while(temp->next){
        temp = temp->next;
    }
    Node* tail = temp;
    tail->next = head;
    //Now traverse the first n - k nodes of the lisked list
    temp = head;
    for(int i  = 1; i< n -k ; i++){
        temp = temp->next;
    }
    //temp is now pointing to the n - k node
    Node* new_head = temp->next;
    temp->next = nullptr;
    return new_head;
}

Node *oddEvenList(Node *&head)
{
    if (!head || !head->next)
    {
        return head;
    }

    Node *odd_node_ptr = head;
    Node *even_node_ptr = head->next;
    Node *evenHead = even_node_ptr;

    while (even_node_ptr && even_node_ptr->next)
    {
        odd_node_ptr->next = even_node_ptr->next;
        odd_node_ptr = odd_node_ptr->next;
        even_node_ptr->next = odd_node_ptr->next;
        even_node_ptr = even_node_ptr->next;
    }

    odd_node_ptr->next = evenHead;
    return head;
}
/*
You are given the head of a singly linked list. The list can be representd as:
L0 -> L1 -> L2 -> L3 -> L4 -> L5 -> .....->Ln - 1 -> Ln;
Rorded the list to be on the following form:
L0 -> Ln -> L1 -> Ln - 1-> L2 -> Ln-2->.....
*/
Node *reorder(Node *&head)
{
    // Step 1: find the middle element
    Node *slow = head;
    Node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // slow points to the middle element of the linked list
    // Step 2: Seperate the linked list and reverse the 2nd half of the linked list
    Node *curr = slow->next;
    slow->next = nullptr;
    Node *prev = slow;
    while (curr)
    {
        Node *nextPtr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextPtr;
    }
    // Step 3: Mergint the two halves of the linkedl list
    Node *ptr1 = head; // For the first half of the linkedl list
    Node *ptr2 = prev; // For the second half of the linkedl list
    while (ptr1 != ptr2)
    {
        Node *temp = ptr1->next;
        ptr1->next = ptr2;
        ptr1 = ptr2;
        ptr2 = temp;
    }
    return head;
}
/*
Given a linked list, swap every two adjacent nodes and return its head. You may not modify the values in the list's nodes. Only nodes themselves may be changed.
*/
Node *swap_adjacentNodes(Node *&head)
{
    // base case
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    // recursive case
    Node *secondNode = head->next;
    head->next = swap_adjacentNodes(secondNode->next);
    secondNode->next = head; // reversed the linked list between first and the second nodes
    return secondNode;
}

/*You are given the head of a linked list, and an integer k.

Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).*/
Node *swapNodes(Node *&head, int k)
{
    if (!head || !head->next)
        return head;
    Node *first = head;
    Node *second = head;
    Node *current = head;
    // Step 1: Get the  kth node from the begining
    for (int i = 1; i < k; ++i)
    {
        if (current)
        {
            current = current->next;
        }
    }
    first = current;
    // Get the kth node from the end
    while (current && current->next)
    {
        current = current->next;
        second = second->next;
    }
    // swap the values
    if (first && second)
    {
        std::swap(first->data, second->data);
    }
    return head;
}

/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.
*/

Node *removeNthFromEnd(Node *head, int n)
{
    if (!head)
        return head;

    Node *dummy = new Node(0);
    dummy->next = head;
    Node *current = dummy;
    Node *slow = dummy;

    // Advance 'current' by 'n + 1' steps to create the correct gap
    for (int i = 0; i <= n; i++)
    {
        if (current == nullptr)
            return head; // if n is greater than the length of the list
        current = current->next;
    }

    // Move both pointers until 'current' reaches the end
    while (current != nullptr)
    {
        current = current->next;
        slow = slow->next;
    }

    // Remove the 'n-th' node from the end
    Node *temp = slow->next;
    slow->next = slow->next->next;
    delete temp;

    // Set the new head and delete dummy node
    Node *new_head = dummy->next;
    delete dummy;

    return new_head;
}
#endif