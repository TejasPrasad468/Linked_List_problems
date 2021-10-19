#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

bool checkcycle(Node *head)
{
    Node *slow=head;
    Node *fast=head;
    while(fast != NULL && fast->next!= NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return 1;
        }
    }
    return 0;
}
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


int main()
{
    Node *head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        head = insert(head);
    }  
    cout<<checkcycle(head)<<endl;
    linkedListTraversal(head);
    return 0;
}