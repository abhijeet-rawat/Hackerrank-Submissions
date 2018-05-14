/*-----------------------------------------------------------------------

Problem Title: Reverse a linked list
Problem Link: https://www.hackerrank.com/challenges/reverse-a-linked-list
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node* head)
{
    struct Node *current, *prev, *nex;
    prev = NULL;
    current = head;
    while (current != NULL) {
        nex = current->next;
        current->next = prev;
        prev = current;
        current = nex;
    }
    head = prev;
    return prev;
}