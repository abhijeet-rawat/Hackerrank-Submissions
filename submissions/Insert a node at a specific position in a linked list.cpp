/*-----------------------------------------------------------------------

Problem Title: Insert a node at a specific position in a linked list
Problem Link: https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node* head, int data, int position)
{
    if (head == NULL || position == 0) {
        struct Node* temp;
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = head;
        head = temp;
        return head;
    }
    else {
        int count = 0;
        struct Node *ptr = head, *qtr;
        while (count != position) {
            if (count == (position - 1)) {
                qtr = ptr;
            }
            ptr = ptr->next;
            count++;
        }

        struct Node* temp;
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = ptr;
        qtr->next = temp;
        return head;
    }
}