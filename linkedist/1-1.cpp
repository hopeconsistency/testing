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

node *reverse(node *head)
{
    node *prevptr = NULL;
    node *currentptr = head;
    node *nextptr;
    while (currentptr != NULL)
    {
        nextptr = currentptr->next;
        currentptr->next = prevptr;
        prevptr = currentptr;
        currentptr = nextptr;
    }
    return prevptr;
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
    node *newhead = reverse(head);
    display(newhead);
    return 0;
}