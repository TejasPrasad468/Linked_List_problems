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
    // cout << endl;
}

// int main()
// {
//      Node *head;
//      Node *second;
//      Node *third;
//      Node *fourth;

//     // Allocate memory for nodes in the linked list in Heap
//     head = ( Node *)malloc(sizeof( Node));
//     second = ( Node *)malloc(sizeof( Node));
//     third = ( Node *)malloc(sizeof( Node));
//     fourth = ( Node *)malloc(sizeof( Node));

//     // Link first and second nodes
//     head->data = 7;
//     head->next = second;

//     // Link second and third nodes
//     second->data = 11;
//     second->next = third;

//     // Link third and fourth nodes
//     third->data = 41;
//     third->next = fourth;

//     // Terminate the list at the third node
//     fourth->data = 66;
//     fourth->next = NULL;

//     linkedListTraversal(head);
//     return 0;
// }
int main()
{
    Node *head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        head = insert(head);
    }
    // cout << "Linked list before deletion" << endl;
    linkedListTraversal(head);
    // head=deletionatbegining(head);
    // cout<<"Linked list after deletion"<<endl;
    // linkedListTraversal(head);
    return 0;
}
// struct node *solve(struct node *head)

// {

//     struct node *temp = head, *p = NULL;

//     while (temp != NULL)
//     {

//         if (temp->data % 2 == 0) // if element is even

//         {

//             // start is pointing to the previous element to first occurence of  even and  end is pointing to next element to the last even.

//             // start-> 1 2 4 6  4 10 8 12 4 end-> 7 9

//             struct node *pre, *next, *start, *end;

//             pre = NULL;

//             start = temp;

//             while (temp != NULL && temp->data % 2 == 0) // loop for reversing the linnked list using 3 pointer.

//             {

//                 next = temp->next;

//                 temp->next = pre;

//                 pre = temp;

//                 temp = next;
//             }

//             end = temp;

//             start->next = temp;

//             if (p == NULL)

//             {

//                 head = pre;
//             }

//             else

//             {

//                 p->next = pre;
//             }
//         }

//         else
//         {

//             p = temp;

//             temp = temp->next;
//         }
//     }

//     return head;
// }
