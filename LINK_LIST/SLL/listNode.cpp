// #include <iostream>
// class Node
// {
// public:
//     int val;
//     Node *next;

//     Node(int data) : val(data), next(NULL) {}
// };


// /* Insertion at the starting node of the linkList  */
// void insertAtHead(Node *&head, int val)
// {
//     Node *new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// /*Display the linked list*/
// void display(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         std::cout << temp->val << "->";
//         temp = temp->next;
//     }
//     std::cout << "NULL" << std::endl;
// }


// /* Insertion at the last node of the linkList  */
// void insertAtLast(Node *&head, int val)
// {
//     Node *new_node = new Node(val);
//     Node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     // temp has reached to the last node
//     temp->next = new_node;
// }

// /* Insertion at the given node pssition of the linkList  */
// void insertAtPosition(Node *&head, int val, int pos)
// {
//     if (pos == 0)
//     {
//         insertAtHead(head, val);
//         return;
//     }

//     Node *new_node = new Node(val);
//     Node *temp = head;
//     int current_pos = 0;
//     while (current_pos != pos - 1)
//     {
//         temp = temp->next;
//         current_pos++;
//     }
//     // temp is pointing to node at pos - 1
//     new_node->next = temp->next;
//     temp->next = new_node;
// }

// /*Update at kth position in a singly linklist*/
// void updateAtPosition(Node* & head,int k, int val){
//     Node* temp = head;
//     int current_position = 0;
//     while (current_position != k){
//         temp = temp->next;
//         current_position++;
//     }
    
//     //temp will be pointing to kth node
//     temp->val = val;
// }


// /*Deleting a node at the start*/
// void deleteAtHead(Node* &head){
//     Node* temp = head;
//     head = head->next;
//     free(temp);
// }

// /*Deleting a node at the end*/
// void deleteAtEnd(Node* &head){
//     Node* second_last = head;
//     while( second_last->next->next != NULL){
//         second_last = second_last->next;
//     }
//     //Now second last node points to second last node
//     Node* temp = second_last->next;//node to be deleted
//     second_last->next = NULL;
//     free(temp);
// }
// void deleteAtPosition(Node* head, int pos){
//     if(pos == 0){
//         deleteAtHead(head);
//     }
//     int curr_pos = 0;
//     Node* prev = head;
//     while(curr_pos != pos - 1 ){
//         prev = prev->next;
//         curr_pos++;
//     }
//     //Now previous is pointing to node at pos - 1
//     Node* temp  = prev->next;
//     prev->next = prev->next->next;
//     free(temp); 
// }
// int main()
// {
//     Node *head = NULL;
//     insertAtHead(head, 2);
//     display(head);
//     insertAtHead(head, 1);
//     display(head);
//     insertAtLast(head, 24);
//     display(head);
//     insertAtLast(head, 4);
//     display(head);
//     insertAtPosition(head, 4, 2);
//     display(head);
//     updateAtPosition(head, 3, 5);
//     display(head);
//     deleteAtHead(head);  
//     display(head);
//     deleteAtEnd(head);
//     display(head);
//     deleteAtPosition(head,1);
//     display(head);
//     return 0;
// }
#include <iostream>
class Node {
private:
   
public:
    int val;
    Node* next;

    Node(int data):val(data),next(NULL){}

};
void insertAtStart(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        std::cout<<temp->val<<"->";
        temp = temp->next;
    }
    std::cout<<"NULL";
    std::cout<<std::endl;
}
void insertAtTail(Node* & head, int val){
    Node* temp = head;
    Node* new_node = new Node(val);
    while(temp->next != NULL){
        temp = temp->next;
    }
    //temp has reached to its last value
    temp->next = new_node;
    new_node->next = NULL;
}

void insertAtPoition(Node* &head, int val , int pos){
    Node* new_node =  new Node(val);
    Node* temp = head;
    int current_pos = 0;
    if(pos == 0){
        insertAtStart(head,val);
        return;
    }
    while(current_pos != pos-1){
        temp = temp->next;
        current_pos++;
    }
    //temp is pointing to node at position - 1
    new_node-> next = temp->next;
    temp->next = new_node;
}
int main() {
    Node* head = NULL;
    insertAtStart(head , 2);
    display(head);
    insertAtStart(head, 1);
    display(head);
    insertAtTail(head, 3);
    display(head);
    insertAtPoition(head,4,1);
    display(head);
    return 0;
}