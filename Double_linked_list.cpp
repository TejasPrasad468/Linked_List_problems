#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *prev;
    int data;
    Node *next;
};
Node *insert(Node *head)
{
    int new_data;
    cin >> new_data;
    Node *p = ( Node *)malloc(sizeof( Node));
    p->data = new_data;
    p->next = NULL;
    Node *ptr;
    if (head == NULL)
    {
        p->prev=NULL;
        head = p;
        ptr = head;
        return head;
    }
    else
    {
        ptr->next = p;
        p->prev = ptr;
        ptr = p;
        return head;
    }
}
void linkedListTraversal(Node *ptr)
{
    cout<<"For next"<<endl;
    cout<<ptr->data<<endl;
    ptr=ptr->next;
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

Node* reverseDLL(Node * head)
{
    Node *p=head;
    Node *before=p->prev;
    Node *after=p->next;
    while(p!=NULL)
    {
        p->prev=after;
        p->next=before;
        p=before;
        after=before->next;
        before=before->prev;
    }
    return p;
}

int main()
{
    Node *head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        head = insert(head);
    }
    head=reverseDLL(head);
    linkedListTraversal(head);
    return 0;
}