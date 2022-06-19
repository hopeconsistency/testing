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

int findheight(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return max(findheight(root->left) + 1, findheight(root->right) + 1);
}

int main()
{ // 4 2 5 1 3
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->left = newNode(6);
    cout << "The maximum height is " << findheight(root);
    return 0;
}
