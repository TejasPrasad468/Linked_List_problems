#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

// Node *deletionatbegining(Node *head)
// {
//     Node *ptr = head;
//     head = head->next;
//     free(ptr);
//     return head;
// }
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
void linkedListTraversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
    cout << endl;
}
Node *merge(Node *head1, Node *head2)
{
    Node *p = head1;
    Node *ptr = head2;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    return head1;
}
Node *shorted(Node *head1, Node *head2)
{
    Node *p1 = head1;
    Node *p2 = head2;
    Node *dummy = new Node;
    Node *p3 = dummy;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummy->next;
}
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        head1 = insert(head1);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        head2 = insert(head2);
    }
    cout << "First Linked List" << endl;
    linkedListTraversal(head1);
    cout << "Second Linked List" << endl;
    linkedListTraversal(head2);
    // Node *head=merge(head1,head2);
    Node *head=shorted(head1, head2);
    linkedListTraversal(head);
    return 0;
}