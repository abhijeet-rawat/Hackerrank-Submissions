/*-----------------------------------------------------------------------

Problem Title: Print the Elements of a Linked List
Problem Link: https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node* head)
{
    if (head == NULL) {
        return;
    }
    else {
        struct Node* ptr;
        ptr = head;
        while (ptr != NULL) {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }
    // This is a "method-only" submission.
    // You only need to complete this method.
}