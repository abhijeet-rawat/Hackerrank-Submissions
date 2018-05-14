/*-----------------------------------------------------------------------

Problem Title: Tree : Top View
Problem Link: https://www.hackerrank.com/challenges/tree-top-view
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void top_view(node* root)
{
    struct node *temp1, *temp2;
    vector<int> vec;
    temp1 = root;
    temp2 = root->right;
    while (temp1 != NULL) {
        vec.push_back(temp1->data);
        temp1 = temp1->left;
    }
    vector<int>::iterator itr = vec.end();
    itr--;
    while (itr != vec.begin()) {
        cout << (*itr) << " ";
        itr--;
    }
    cout << *(vec.begin()) << " ";
    while (temp2 != NULL) {
        cout << temp2->data << " ";
        temp2 = temp2->right;
    }
}