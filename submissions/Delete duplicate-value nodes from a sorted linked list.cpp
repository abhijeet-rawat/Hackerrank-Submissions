/*-----------------------------------------------------------------------

Problem Title: Delete duplicate-value nodes from a sorted linked list
Problem Link: https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node* head)
{
    struct Node *head1 = NULL, *ptr = head, *current;
    while (ptr != NULL) {
        if (head1 == NULL) {
            struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
            temp->data = ptr->data;
            temp->next = NULL;
            head1 = temp;
            current = head1;
        }
        else if (current->data != ptr->data) {
            struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
            temp->data = ptr->data;
            temp->next = NULL;
            current->next = temp;
            current = current->next;
        }
        ptr = ptr->next;
    }
    return head1;
}