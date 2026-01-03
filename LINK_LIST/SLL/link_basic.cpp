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

/*SEARCH VALUE AT ANY NODE*/
bool searc(Node* head, int value){
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

//REversing a linked list using recursive call method
Node* recur_reverse(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* newhead = recur_reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}


int main() {
    Node* d = NULL;
    insertAtTail(d,45);
    insertAtTail(d,32);
    insertAtTail(d,2);
    insertAtHead(d,4);
    display(d);
    std::cout<<searc(d,48)<<std::endl;
    deletion(d,4);
    Node* newhead = recur_reverse(d);
    display(newhead);
    newhead = reverse_k(d,2);
    display(newhead);
    return 0;
}
/*
Demerits of Arrays:
1. Size can't be modified
2. Contiguous memory allocated
3. Inserition and deletion is coastly

Properties of linked list:
1. Size can be modified
2. Non - contiguous memory allocation
3. Insertion and deletion at any point is easier
*/