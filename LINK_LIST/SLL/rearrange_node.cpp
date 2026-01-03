#include <iostream>
class Node {
private:
   
public:
    int data;
    Node* next;//pointer to the next node
    Node(int value): data(value), next(NULL){} 
};

/*INSERT ANY ITEM AAT THE FIRST OR HEAD*/
void insertAtHead(Node* &head, int value){
    Node* n = new Node(value);
    n->next = head;
    head = n;
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

int main() {
    Node* d = NULL;
    insertAtTail(d,9);
    insertAtTail(d,8);
    insertAtTail(d,2);
    insertAtHead(d,4);
    insertAtHead(d,5);
    insertAtHead(d,6);
    display(d);
    Node* node = rotate_list(d,6);
    display(node);
    
    return 0;
}
