#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *insert(node *root, int data)
{
    if (root == NULL)
    {
        root = new node;
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    return root;
}

void findmin(node *root)
{
    if (root->left == NULL)
    {
        cout << "The min element in the tree is ";
        cout << root->data;
        cout << endl;
        return;
    }
    findmin(root->left);
}

void findmax(node *root)
{
    if (root->right == NULL)
    {
        cout << "The max element in the tree is ";
        cout << root->data;
        cout << endl;
        return;
    }
    findmax(root->right);
}

int main()
{ // 4 2 5 1 3
    node *root = NULL;
    root = insert(root, 4);
    root = insert(root, 2);
    root = insert(root, 5);
    root = insert(root, 1);
    root = insert(root, 3);
    findmin(root);
    findmax(root);
    return 0;
}
