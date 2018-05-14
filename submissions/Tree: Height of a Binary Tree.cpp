/*-----------------------------------------------------------------------

Problem Title: Tree: Height of a Binary Tree
Problem Link: https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
int getHeight(Node* root)
{
    int hleft, hright;
    if (root == NULL)
        return -1;
    hleft = getHeight(root->left) + 1;
    hright = getHeight(root->right) + 1;
    return max(hleft, hright);
}