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

Node *reversek(Node *head, int k)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *nextptr;

    int count = 0;
    while (curr != NULL && count < k)
    {
        nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next= reversek(nextptr, k);
    }
    return prev;
}
void linkedListTraversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    // cout << endl;
}

int main()
{
    Node *head = NULL;
    int n, k;
    cin >> n;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        head = insert(head);
    }
    Node *newhead = reversek(head, k);
    linkedListTraversal(newhead);
    return 0;
}