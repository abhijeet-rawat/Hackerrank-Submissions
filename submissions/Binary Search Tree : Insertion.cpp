/*-----------------------------------------------------------------------

Problem Title: Binary Search Tree : Insertion
Problem Link: https://www.hackerrank.com/challenges/binary-search-tree-insertion
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/

node* insert(node* root, int value)
{
    node* temp;
    if (root == NULL) {
        temp = (node*)malloc(sizeof(node));
        temp->left = NULL;
        temp->right = NULL;
        temp->data = value;
        root = temp;
    }
    else if (root->data < value) {
        root->right = insert(root->right, value);
    }
    else {
        root->left = insert(root->left, value);
    }
    return root;
}