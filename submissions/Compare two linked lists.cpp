/*-----------------------------------------------------------------------

Problem Title: Compare two linked lists
Problem Link: https://www.hackerrank.com/challenges/compare-two-linked-lists
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node* headA, Node* headB)
{
    struct Node *ptr1 = headA, *ptr2 = headB;
    int flag = 1;
    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1->data == ptr2->data) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        else {
            return 0;
        }
    }
    if ((ptr1 == NULL && ptr2 != NULL) || (ptr1 != NULL && ptr2 == NULL)) {
        return 0;
    }
    else {
        return 1;
    }
}