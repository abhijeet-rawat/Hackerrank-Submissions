/*-----------------------------------------------------------------------

Problem Title: Print in Reverse
Problem Link: https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node* head)
{
    if (head == NULL)
        return;
    ReversePrint(head->next);
    cout << head->data << endl;
}