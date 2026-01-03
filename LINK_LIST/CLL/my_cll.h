#ifndef MY_CLL_h
#define MY_CLL_h
#include <bits/stdc++.h>
class Node
{
public:
    Node *next;
    int val;
    Node(int data) : val(data), next(nullptr) {}
};

class circularLinkedList
{
public:
    Node *head;
    circularLinkedList() : head(nullptr) {}

    void insertAtStart(int val)
    {
        Node *new_node = new Node(val);
        if (!head)
        { 
            head = new_node;
            new_node->next = head; // circular linked list
            return;
        }
        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        } // Tail is pointing to the last node of the circular linked list
        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }
    void display(void) const
    {
        Node *temp = head;
        do
        {
            std::cout << temp->val << "->";
            temp = temp->next;
        } while (temp != head);
        std::cout << std::endl;
    }
    void printCircular(void) const {
        Node* temp = head;
        for (int i = 0; i< 20 ; i++){
            std::cout<<temp->val<<"->";
            temp = temp->next;
        }
        std::cout<<std::endl;
    }

    void insertAtEnd(int val){
        Node* new_node = new Node(val);
        if(!head){
            head = new_node;
            new_node->next = head;
            head = new_node;
            return;
        }
        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }
        tail->next = new_node;
        new_node->next = head;
    }

    void insertAtPosition(int position, int value){
        if( position <= 0){
            std::cout<<"invalid position!"<<std::endl;
            return;
        }
        Node* new_node = new Node(value);
        if(!head){
            head = new_node;
            new_node->next = head;
        }
        else if(position == 1){
            insertAtStart(value);
            return;
        }
        Node* temp = head;
        int currentPos = position - 2;
        while(temp->next != head && currentPos--){
            temp = temp->next;
            currentPos++;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }

    void deleteAtStart(void){
        if(!head){
            return;
        }
        Node* temp = head;
        Node* toDelete = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = toDelete->next;
        head = toDelete->next;
        delete toDelete;
    }

    void deleteAtEnd(void){
        Node* temp = head;
        while(temp->next->next != head){
            temp = temp->next;
        }
        Node* toDelete = temp->next;
        temp->next = head;
        delete temp;
    }

    void deleteAtPosition(int position){
        if(!head){
            return;
        }
        if(position <= 0){
            return ;
        }
        else if(position == 1){
            deleteAtStart();
            return;
        }
        Node*  temp = head;
        int currentPosition = position  - 2;
        while(currentPosition--){
            temp = temp->next;
        }
        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
    }
};
#endif