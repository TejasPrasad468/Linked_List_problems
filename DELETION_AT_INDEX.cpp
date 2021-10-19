#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *insertbetween1(Node *head, int index)
{
    int i = 0;
    Node *p = head;
    Node *ptr;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr = p->next;
    p->next = ptr->next;
    free(ptr);
}
Node *insertbetween2(Node *head, int index)
{
    int i = 0;
    Node *p = head;
    Node *q = head->next;
    while (i != index - 1)
    {
        p = p->next;   
        q = q->next;  
        i++;
    }
    p->next = q->next;
    free(q);
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
    // insertbetween1(head, 1);
    insertbetween2(head, 1);
    linkedListTraversal(head);
    return 0;
}
