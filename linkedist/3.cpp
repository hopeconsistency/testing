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


void findmiddle(node *head)
{
    node *fast=head;
    node *slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }   
    cout<<"The middle element is "<<slow->data;
}

int main()
{
    node *head;
    head = NULL;
    head = beg(head, 5);
    head = beg(head, 6);
    head = beg(head, 7);
    head = beg(head, 4);
    head = beg(head, 1);
    head = beg(head, 0);
    head = beg(head, 1);
    cout << "linked list inserted are :";
    display(head);
    cout << endl;
    findmiddle(head);
    return 0;
}