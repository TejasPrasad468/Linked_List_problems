#include<bits/stdc++.h>
using namespace std;
// 3
// 3 1
// 3 100 1
// 5 2
// 19 12 3 4 17
// 5 3
// 23 45 11 77 18
class Node{
	public:
	int data;
	Node *next;
};
Node *insert(Node *head)
{
	int new_data;
	cin>>new_data;
	Node *p=(Node*)malloc(sizeof(Node));
	Node *ptr;
	p->data=new_data;
	p->next=NULL;
	if(head == NULL)
	{
		head=p;
		ptr=head;
		return head;
	}
	else
	{
		ptr->next=p;
		ptr=p;
		return head;
	}
}
Node *remove(Node *head)
{
	Node *prev = NULL;
	Node *p=head;
	Node *ptr=p->next;
	while(p != NULL)
	{
		if(p->data < ptr->data)
		{
			if(prev == NULL)
			{
				free(p);
				return ptr;
			}
			prev->next=p->next;
			free(p);
			return head;
		}
		prev=p;
		p=p->next;
		ptr=ptr->next;
	}
}
void print(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout<<endl;
}
int main()
{
	Node *head=NULL;
	int test;
	cin>>test;
	while(test != 0)
	{
        int n=0,rem=0;
		cin>>n>>rem;
		for(int i=0;i<n;i++)
		{
			head=insert(head);
		}
		while(rem != 0)
		{
			head=remove(head);
			 rem--;
		}
	    print(head);
		head=NULL;
		test--;
	}
}

