#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *insertAfternode(Node *head,Node *prnode, int ndata)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = ndata; 
    ptr->next = prnode->next;
    prnode->next = ptr;
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
    insertAfternode(head, second,01);
    cout<<"Linked list with insertion at ending is"<<endl;
    linkedListTraversal(head);
    return 0;
}
