#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *insertatfirst(Node *head, int ndata)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = ndata;
    ptr->next = head;
    return ptr;
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
     head=insertatfirst(head,55);
    linkedListTraversal(head);
    return 0;
}
