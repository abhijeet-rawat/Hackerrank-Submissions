/*-----------------------------------------------------------------------

Problem Title: Tree: Level Order Traversal
Problem Link: https://www.hackerrank.com/challenges/tree-level-order-traversal
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void LevelOrder(node* root)
{
    struct node *templ, *tempr;
    deque<struct node*> myque;
    if (root != NULL)
        myque.push_back(root);
    while (myque.empty() != true) {
        cout << (*(myque.begin()))->data << " ";
        templ = (*(myque.begin()))->left;
        tempr = (*(myque.begin()))->right;
        myque.pop_front();
        if (templ != NULL)
            myque.push_back(templ);
        if (tempr != NULL)
            myque.push_back(tempr);
    }
}