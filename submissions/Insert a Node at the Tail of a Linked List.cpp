/*-----------------------------------------------------------------------

Problem Title: Insert a Node at the Tail of a Linked List
Problem Link: https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node* head, int data)
{
    struct Node* ptr;
    ptr = head;
    if (ptr == NULL) {
        struct Node* temp;
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = NULL;
        ptr = temp;
        return ptr;
    }
    else {
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        struct Node* temp;
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = NULL;
        ptr->next = temp;
        return head;
    }
}