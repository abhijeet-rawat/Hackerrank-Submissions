/*-----------------------------------------------------------------------

Problem Title: Tree: Huffman Decoding 
Problem Link: https://www.hackerrank.com/challenges/tree-huffman-decoding
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/

void decode_huff(node* root, string s)
{
    node* ptr = root;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            ptr = ptr->left;
        }
        else if (s[i] == '1') {
            ptr = ptr->right;
        }
        if (ptr->left == NULL && ptr->right == NULL) {
            cout << ptr->data;
            ptr = root;
        }
    }
}