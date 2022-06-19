#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

node *beg(node *head, int data)
{
    node *temp = new node();
    temp->data = data;
    temp->next = head;
    head = temp;
    return head;
}

node *newhead;

void reverse(node *p)
{
    node *q;
    if (p->next == NULL)
    {
        newhead = p;
        return;
    }
    reverse(p->next);
    q = p->next;
    q->next = p;
    p->next = NULL;
}

void display(node *head)
{
    if (head == NULL)
        cout << "linked list is empty";
    cout << endl;
    node *p = head;
    while (p != NULL)
    {
        cout << p->data << "  ";
        p = p->next;
    }
}

int main()
{
    node *head;
    head = NULL;
    head = beg(head, 5);
    head = beg(head, 6);
    head = beg(head, 7);
    cout << "before reversing linked list  :";
    display(head);
    cout << endl;
    cout << "after reversing the linked list  :";
    reverse(head);
    display(newhead);
    return 0;
}