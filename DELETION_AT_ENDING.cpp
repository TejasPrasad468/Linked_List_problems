#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};
Node *deletionatending1(Node *head,int n)
{
    Node *p=head;
    Node *q ;
    int i=1;
    while (i<n-1)
    {
        p=p->next;
        i++;
    }
    q=p->next;
    p->next=NULL;
    // cout<<p->next;
    free(q);
}
Node *deletionatending2(Node *head)
{
    Node *p = head;
    Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;   
        q = q->next;  
    }
    p->next = NULL;
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
    //  deletionatending1(head,4);
     deletionatending2(head);
     linkedListTraversal(head);
   
    return 0;
}