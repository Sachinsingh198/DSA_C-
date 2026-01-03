/*
QUEUE =>
        A linear Data Structures.
        FIFO(First in first out)
        FCFS (First Come First Serve)
Data: 
    1. Storage
    2. Insertion end
    3. Deletion end
Methods:
    1. enque  => insert
    2. deque  => remove
    3. first value
    4. last value
    5. peak(pos)
    6. isempty
    7. isfull
    8. front  => gives the element which comes first.
NOTE: Not limited to the counters
      Queue can be implemebted in various ways
      1. Using array     2. Using linked list    3.Using othe ADT

Types of Queues:
    i)  simple 
    ii) priority queue : custom priority
    iii) circular queue : Front and rear part point to each other
    iv) Double ended queue (Deque) : Insertion from both front as well as back or rear end are possible.

Advantages of array implementation of Queues:
    ll -> space efficient
    ll -> pointer -> deletion (array managed by pop_back())


*/
//Linked List Implementation of Queue

#include <iostream>
#include <climits>
#include <vector>
#include <queue>
#include <stack>
class Node{
    public:
    Node* next ;
    int data;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};
class Queue{ // The Linked list implementation
    private:
    Node* head;
    Node* tail;
    int size;
    public:
    Queue(): head(nullptr), tail(nullptr), size(0){}
    void enqueue(int data){//insert from tail
        Node* new_node = new Node(data);
        if(this->head == nullptr){
           this->head = this->tail = new_node;
        }else{
            this->tail->next = new_node;
            this->tail = new_node;
        }
        this->size++;
    }
    void dequeue(void){//remove at head
        if(this->head == nullptr){
            std::cout<<"Queue underflow detected!"<<std::endl;
            return;
        }
        Node* temp = this->head;
        this->head = head->next;
        if(this->head == nullptr) this->tail = nullptr;
        temp->next = nullptr;
        free(temp);
        this->size--;
    }

    int getSize(void){
        return this->size;
    }
    
    bool isEmpty(void){
        // if(this->size == 0 || this->head == nullptr){
        //     return true;
        // }
        // else return false;
        return this->head == nullptr;
    }
    void display(void){
        if(!this->head){
            std::cout<<"Queue is empty!"<<std::endl;
            return;
        }
        Node* temp = this->head;
        while(temp != nullptr){
            std::cout<<temp->data<<" ";
            temp = temp->next;
        }std::cout<<std::endl;
    }
    int front(void){
        if(head == nullptr){
            return INT_MIN;
        }
        return this->head->data;
    }
    int back(void){
        if(tail == nullptr){
            return front();
        }
        return this->tail->data;
    }
};

class Queue_using_Array {
    int front, back;
    std::vector<int> v;

public:
    Queue_using_Array() : front(-1), back(-1) {
        this->v = {};
    }

    void enqueue(int data) {
        if (front == -1) { // If the queue is initially empty
            front = 0;
        }
        v.push_back(data);
        this->back++;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty, cannot dequeue" << std::endl;
            return;
        }
        if (front == back) { // If there is only one element left in the queue
            front = -1;
            back = -1;
        } else {
            front++;
        }
    }

    int getFront() {
        if (isEmpty()) {
            return -1;
        }
        return this->v[this->front];
    }

    int getBack() {
        if (isEmpty()) {
            return -1;
        }
        return this->v[this->back];
    }

    bool isEmpty() {
        return front == -1;
    }
};

int main(){
    Queue_using_Array qu;
    Queue_using_Array q;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(40);
    qu.enqueue(50);
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    // std::cout<<"The size of the queue: "<<qu.getSize()<<std::endl;
    // std::cout<<qu.isEmpty()<<std::endl;
    // while(not qu.isEmpty()){
    //     std::cout<<qu.getFront()<<" ";
    //     qu.dequeue();
    // }
    // std::cout<<std::endl;

    //Reverse all the elements of the queue
    std::queue<int> que;
    que.push(5);
    que.push(4);
    que.push(3);
    que.push(2);
    que.push(1);
    std::stack<int> st;
    while(!que.empty()){
        st.push(que.front());
        que.pop();
    }
    while(!st.empty()){
        que.push(st.top());
        st.pop();
    }
    while(!que.empty()){
        std::cout<<que.front()<<" ";
        que.pop();
    }
    std::cout<<std::endl;
}