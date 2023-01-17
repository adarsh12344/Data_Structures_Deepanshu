#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
void preorder(Node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(30);
    root->right = new Node(40);
    root->left->left = new Node(5);
    root->right->left = new Node(60);
    preorder(root);
    return 0;
}