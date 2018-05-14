/*-----------------------------------------------------------------------

Problem Title: Insert a node at the head of a linked list
Problem Link: https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node* head, int data)
{
    struct Node* ptr;
    ptr = head;
    if (ptr == NULL) {
        struct Node* temp;
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = ptr;
        ptr = temp;
        return ptr;
    }
    else {
        struct Node* temp;
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = ptr;
        ptr = temp;
        return ptr;
    }
}