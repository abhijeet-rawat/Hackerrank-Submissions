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
    struct Node *prev = NULL, *ptr = head, *current = head, *newhead = NULL;

    while (ptr != NULL) {
        ptr = ptr->next;
        current->next = prev;
        prev = current;
        current = ptr;
    }
    newhead = prev;
    return newhead;
}