/*-----------------------------------------------------------------------

Problem Title: Merge two sorted linked lists
Problem Link: https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node* headA, Node* headB)
{
    struct Node *ptr1 = headA, *ptr2 = headB, *ptr3 = NULL;
    while (ptr1 != NULL && ptr2 != NULL) {
        struct Node* temp;
        temp = (struct Node*)malloc(sizeof(struct Node));
        if (ptr1->data < ptr2->data) {
            temp->data = ptr1->data;
            temp->next = ptr3;
            ptr3 = temp;
            ptr1 = ptr1->next;
        }
        else {
            temp->data = ptr2->data;
            temp->next = ptr3;
            ptr3 = temp;
            ptr2 = ptr2->next;
        }
    }
    if (ptr1 == NULL && ptr2 != NULL) {
        while (ptr2 != NULL) {
            struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
            temp->data = ptr2->data;
            temp->next = ptr3;
            ptr3 = temp;
            ptr2 = ptr2->next;
        }
    }
    else if (ptr2 == NULL && ptr1 != NULL) {
        while (ptr1 != NULL) {
            struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
            temp->data = ptr1->data;
            temp->next = ptr3;
            ptr3 = temp;
            ptr1 = ptr1->next;
        }
    }
    struct Node *ptr = ptr3, *current = ptr3, *prev = NULL, *newhead;

    while (ptr != NULL) {
        ptr = ptr->next;
        current->next = prev;
        prev = current;
        current = ptr;
    }
    newhead = prev;
    return newhead;
}