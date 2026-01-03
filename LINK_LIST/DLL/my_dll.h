#ifndef MY_DLL
#define MY_DLL
#include <bits/stdc++.h>
class Node {
public:
    Node *prev;
    Node *next;
    int data;
    Node(int data) {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node *head;
    Node *tail;

    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void display(void) const  {
        Node *temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << "  ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    void insertAtStart(int val) {
        Node *new_node = new Node(val);
        if (head == nullptr) {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }

    void insertAtEnd(int val) {
        Node *new_node = new Node(val);
        if (tail == nullptr) {
            tail = new_node;
            head = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    void insertAtPosition(int k, int val) {
        Node *temp = head;
        int counter = 0;
        while (temp->next != nullptr && counter != k - 1) {
            temp = temp->next;
            counter++;
        }
        Node *new_node = new Node(val);
        new_node->next = temp->next;
        if (temp->next != nullptr) {
            temp->next->prev = new_node;
        }
        temp->next = new_node;
        new_node->prev = temp;
    }

    void deleteAtStart() {
        if (head == nullptr) {
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr; // List became empty
        }
        delete temp;
    }

    void deleteAtEnd() {
        if (tail == nullptr) {
            return;
        }
        Node *temp = tail;
        tail = tail->prev;
        if (tail != nullptr) {
            tail->next = nullptr;
        } else {
            head = nullptr; // List became empty
        }
        delete temp;
    }

    void deleteAtPosition(int k) {
        Node *temp = head;
        int counter = 0;
        while (temp != nullptr && counter < k - 1) {
            temp = temp->next;
            counter++;
        }
        if (temp != nullptr && temp->next != nullptr) {
            Node *node_to_delete = temp->next;
            temp->next = node_to_delete->next;
            if (node_to_delete->next != nullptr) {
                node_to_delete->next->prev = temp;
            } else {
                tail = temp; // Node to delete was the tail
            }
            delete node_to_delete;
        }
    }

    bool isPalindrome() {
        Node *left = head;
        Node *right = tail;
        while (left != right && right != left->prev) {
            if (left->data != right->data) {
                return false;
            }
            left = left->next;
            right = right->prev;
        }
        return true;
    }
};

// Given the head of a doubly linked list, reverse it
void reverse_list(Node *&head, Node *&tail) {
    Node *temp = head;
    while (temp != nullptr) {
        Node *next = temp->next;
        temp->next = temp->prev;
        temp->prev = next;
        temp = temp->prev; // This should be temp->prev since we swapped prev and next
    }
    std::swap(head, tail);
}

//Given the head of a doubly linked list, delete the nodes whose neighbours have same value. Traverse the list from rightn to left
 void delete_same_neighbours(Node*& head, Node*& tail){
    Node* curr = tail->prev;
    Node* nxt = curr->next;
    Node* pre = curr->prev;
    while(curr != head){
        if(nxt->data == pre->data){
            // Node* temp = curr;
            pre->next = nxt;
            nxt->prev = pre;
            free(curr);
        }
        curr = pre;
        nxt = curr->next;
        pre = curr->prev;
    }
 }
#endif