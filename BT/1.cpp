#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *newNode(int data)
{
    node *root = new node;
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
}

void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{ // 4 2 5 1 3
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    cout << "Preorder traversal of the tree is:  ";
    preorder(root);
    cout << endl;
    cout << "Inorder traversal of the tree is:  ";
    inorder(root);
    cout << endl;
    cout << "Postorder traversal of the tree is:  ";
    postorder(root);
    return 0;
}
