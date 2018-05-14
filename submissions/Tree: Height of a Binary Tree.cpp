/*-----------------------------------------------------------------------

Problem Title: Tree: Height of a Binary Tree
Problem Link: https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree
Author: abhijeet_rawat
Language : C++14

-----------------------------------------------------------------------*/


/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
int height(Node* root)
{
    if (root == NULL) {
        return -1;
    }
    int lefth = 1 + height(root->left);
    int righth = 1 + height(root->right);
    return (lefth > righth) ? (lefth) : (righth);
}