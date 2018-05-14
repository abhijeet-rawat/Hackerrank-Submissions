/*-----------------------------------------------------------------------

Problem Title: Delete a Node
Problem Link: https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node* head, int position)
{
    struct Node *ptr = head, *qtr = head;
    int count = 0;
    while (count != position) {
        if (count == (position - 1)) {
            qtr = ptr;
        }
        ptr = ptr->next;
        count++;
    }
    if (position == 0) {
        ptr = ptr->next;
        head = ptr;
        return head;
    }
    else {
        qtr->next = ptr->next;
        return head;
    }
}