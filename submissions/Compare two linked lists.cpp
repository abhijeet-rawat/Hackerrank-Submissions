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
    int flag;
    struct Node *ptr1, *ptr2;
    ptr1 = headA;
    ptr2 = headB;
    flag = 0;
    while (ptr1 != NULL && ptr2 != NULL) {
        if ((ptr1->data) != (ptr2->data)) {
            flag = 1;
            break;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    if (flag == 1) {
        return 0;
    }
    else if (ptr1 != NULL || ptr2 != NULL) {
        return 0;
    }
    else {
        return 1;
    }
}