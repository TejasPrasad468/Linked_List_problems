#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *deletionAfternode(Node *head,int value)
{
    Node *p=head;
    Node *q=p->next;
    while(q->data != value && q->data != NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
    p->next=q->next;
    free(q);
    }
    return head;
    // cout<<ptr->next<<endl;
}
void linkedListTraversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element:" << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    fourth = (Node *)malloc(sizeof(Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    deletionAfternode(head, 11);
    cout<<"Linked list with deletion at given value is"<<endl;
    linkedListTraversal(head);
    return 0;
}
