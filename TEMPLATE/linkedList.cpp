#include <bits/stdc++.h>

template <typename T>
class LinkedList
{

    class Node
    {
    public:
        Node *next;
        T data;
        Node(T data)
        {
            this->data = data;
            this->next = nullptr;
        }
    };
    Node *head;

public:
    LinkedList() : head(nullptr) {}
    ~LinkedList() {}

    void append(T value)
    {
        Node *new_node = new Node(value);
        if (!head)
        {
            head = new_node;
        }
        else
        {
            Node *temp = head;
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }
    void remove(T value){
        if(!value) return;
        if(head->data == value){
            Node* temp = head;
            head = temp->next;
            free(temp);
            return;
        }
        Node* temp = head;
        while(temp->next){
            if(temp->next->data == value){
                Node* new_node = temp->next;
                temp->next = temp->next->next;
                free (new_node);
                return;
            }
            temp = temp->next;
        }
    }
    void display(void) const {
        Node* temp = head;
        while(temp){
            std::cout<<temp->data<<"->";
            temp = temp->next;
        }
        std::cout<<"NULL"<<std::endl;
    }
};

