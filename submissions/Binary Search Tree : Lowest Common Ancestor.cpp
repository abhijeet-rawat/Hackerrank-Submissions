/*-----------------------------------------------------------------------

Problem Title: Binary Search Tree : Lowest Common Ancestor
Problem Link: https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor
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

node* lca(node* root, int v1, int v2)
{
    if (root == NULL) {
        return NULL;
    }
    if (root->data == v1 || root->data == v2) {
        return root;
    }
    struct node* leftlca = lca(root->left, v1, v2);
    struct node* rightlca = lca(root->right, v1, v2);

    if (leftlca && rightlca) {
        return root;
    }
    return (leftlca != NULL) ? (leftlca) : (rightlca);
}