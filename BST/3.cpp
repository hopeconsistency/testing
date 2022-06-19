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

bool find(node *root, int data)
{
   if (root == NULL)
    {
        return false;
    }
    else if (root->data == data)
    {
        return true;
    }
    else if (data <= root->data)
    {
        return find(root->left, data);
    }
    else
    {
        return find(root->right, data);
    }
}

int main()
{ // 4 2 5 1 3
    node *root = NULL;
    root = insert(root, 4);
    root = insert(root, 2);
    root = insert(root, 5);
    root = insert(root, 1);
    root = insert(root, 3);
    cout << find(root, 8) << endl;
    return 0;
}
