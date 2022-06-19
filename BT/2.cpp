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

void levelorder(node *root)
{
    if (root == NULL)
        return;
    queue<node *>q;
    q.push(root);
    while (!q.empty())
    {
        node * temp= q.front();
        cout<<temp->data;
        cout<<" ";
        q.push(temp->left);
        q.push(temp->right);
        q.pop();
    }
    
}


int main()
{ // 4 2 5 1 3
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    cout << "DFS traversal of the tree is:  ";
    levelorder(root);
    return 0;
}
