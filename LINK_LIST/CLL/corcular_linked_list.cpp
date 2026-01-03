/*
Advantages of circular linked lists over a Singular Linked List
   # We can start traversing from any node of the linked list to print the nodes until we reach again to the visited node.
   # When we have to traverse the Linked list in circular manner in a multiple ways.
   #

*/

#include <bits/stdc++.h>
#include "my_cll.h"

int main()
{
    circularLinkedList cll;
    cll.insertAtStart(7);
    cll.insertAtStart(6);
    cll.insertAtStart(5);
    cll.insertAtStart(4);
    cll.insertAtStart(3);
    cll.insertAtStart(2);
    cll.insertAtStart(1);
    cll.display();
    cll.insertAtEnd(8);
    cll.display();
    cll.insertAtPosition(3,9);
    cll.display();
    cll.deleteAtStart();
    cll.display();
    cll.printCircular();
    cll.deleteAtEnd();
    cll.display();
    cll.deleteAtPosition(2);
    cll.display();
    cll.printCircular();
}