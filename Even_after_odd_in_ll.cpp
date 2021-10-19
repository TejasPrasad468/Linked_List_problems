#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

Node *insert(Node *head)
{
    int new_data;
    cin >> new_data;
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->data = new_data;
    p->next = NULL;
    Node *ptr;
    if (head == NULL)
    {
        head = p;
        ptr = head;
        return head;
    }
    else
    {
        ptr->next = p;
        ptr = p;
        return head;
    }
}
Node *evenodd(Node *head)
{
    Node *ptr=head;
    Node *res=new Node;
    Node *result=new Node;
    Node *p=res;
    Node *r=result;
    while(ptr != NULL)
    {
        if(ptr->data % 2 != 0)
        {
            r->next=ptr;
            r=r->next;
            ptr=ptr->next;
        }
        else
        {
            p->next=ptr;
            p=p->next;
            ptr=ptr->next;
        }
    }
    r->next=res->next;
    return result->next;
}
void linkedListTraversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
    // cout << endl;
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
    head=evenodd(head);
    linkedListTraversal(head);
    return 0;
}