#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

Node *head = NULL;
void insert(int new_data)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}
Node *linkedListTraversal(Node *ptr)
{
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main()
{
    int n;
    cin >> n;
    int m;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        insert(m);
    }
    linkedListTraversal(head);
    return 0;
}
