/*
push() => insert at head;
new_node->next = head;
head = new_node;
pop() => delete at head;


*/
#include <iostream>
class Node {
private:
public:
        Node* next;
        int data;
        Node(int value): data(value), next(nullptr){}
};
class Stack{
    Node* head;
    int capacity;
    int current;
    Stack(int c){
        this->capacity = c;
        this->current = 0;
        head = nullptr;
    }
    bool isEmpty(void){
        return this->head = nullptr;
    }
    bool isFull(void){
        return this->current == this->capacity;
    }
    void push(int val){
        if(this->current == this->capacity) return;
        Node* new_node = new Node(val);
        new_node->next = head;
        this->head = new_node;
        this->current++;
    }
    int pop(){
        if(this->head == nullptr){
            std::cout<<"Stack underflow."<<std::endl;
            return -1;
        }
        Node* new_head = this->head->next;
        this->head->next = nullptr;
        Node* toBeRemoved = this->head;
        int result = toBeRemoved->data;
        delete toBeRemoved;
        this->head = new_head;
        return result;
    }
};
int main() {
    Stack* st;
    return 0;
}