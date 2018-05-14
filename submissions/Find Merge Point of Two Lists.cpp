/*-----------------------------------------------------------------------

Problem Title: Find Merge Point of Two Lists
Problem Link: https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <stack>
/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node* headA, Node* headB)
{
    stack<struct Node*> stk1;
    stack<struct Node*> stk2;
    struct Node* temp;
    temp = headA;
    while (temp != NULL) {
        stk1.push(temp);
        temp = temp->next;
    }
    temp = headB;
    while (temp != NULL) {
        stk2.push(temp);
        temp = temp->next;
    }
    while (stk1.top() == stk2.top()) {
        temp = stk1.top();
        stk1.pop();
        stk2.pop();
    }
    return temp->data;
}