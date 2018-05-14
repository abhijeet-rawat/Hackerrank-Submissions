/*-----------------------------------------------------------------------

Problem Title: Tree: Inorder Traversal
Problem Link: https://www.hackerrank.com/challenges/tree-inorder-traversal
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void inOrder(node* root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}