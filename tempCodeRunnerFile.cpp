// Node *linkedListTraversal(Node *ptr)
//  {
//      while (ptr != NULL)
//     {
//         cout << "Element:" << ptr->data << endl;
//         ptr = ptr->next;
//     }
//  }
// 2 18 24 3 5 7 9 6 12
// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// 	public:
// 	long int data;
// 	Node *next;
// };

// Node *insert(Node *head,long int temp)
// {
// 	Node *p=(Node*)malloc(sizeof(Node));
// 	p->data=temp;
// 	p->next=NULL;
// 	Node *ptr;
// 	if(head==NULL)
// 	{
// 		head=p;
// 		ptr=head;
// 		return head;
// 	}
// 	else
// 	{
// 		ptr->next=p;
// 		ptr=p;
// 		return head;
// 	}
// }
// Node *solve(Node *head)
// {
// 	Node *temp=head;
// 	Node *p=NULL;
// 	while(temp!=NULL)
// 	{
// 		if(temp->data % 2 ==0)
// 		{
// 			Node *pre;
// 			Node *next;
// 			Node *start;
// 			pre = NULL;
// 			start =temp;
// 			while(temp->data % 2==0 && temp!=NULL)
// 			{
// 				next=temp->next;
// 				temp->next=pre;
// 				pre=temp;
// 				temp=next;
// 			}
// 			Node *end;
// 			end=temp;
// 			start->next=temp;
// 			if (p == NULL)
//             {
//                 head = pre;
//             }

//             else
//             {
//                 p->next = pre;
//             }
// 		}
//         else
//         {
//             p = temp;
//             temp = temp->next;
//         }
// 	}
// 	return head;
// }
// void display(Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         cout<<ptr->data <<" ";
//         ptr = ptr->next;
//     }
//     cout << endl;
// }

// int main()
// {
// 	int num;
// 	long int temp;
// 	Node *head=NULL;
// 	cin >> num;
// 	for(int i=0;i<num;i++)
// 	{
// 		cin>>temp;
// 		head=insert(head,temp);
// 	}
// 	head=solve(head);
// 	display(head);
// 	return 0;
// }

// // Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

// // Write your code here
#include <bits/stdc++.h>

using namespace std;

class node
{

public:
    int data;

    node *next;

    node(int val)

    {

        data = val;

        next = NULL;
    }
};

void display(node *head)

{

    node *temp = head;

    while (temp != NULL)

    {

        cout << temp->data << " ";

        temp = temp->next;
    }
}

void insertAtTail(node *&head, int val)

{

    node *n = new node(val);

    n->next = NULL;

    node *temp = head;

    if (temp == NULL)

    {

        head = n;

        return;
    }

    while (temp->next != NULL)

    {

        temp = temp->next;
    }

    temp->next = n;
}

node *reverse(node *&head)

{

    node *prevPtr = NULL;

    node *currentPtr = head;

    node *nextPtr;

    while (currentPtr != NULL)

    {

        nextPtr = currentPtr->next;

        currentPtr->next = prevPtr;

        prevPtr = currentPtr;

        currentPtr = nextPtr;
    }

    return prevPtr;
}

void insertAtHead(node *&head, int val)

{

    node *n = new node(val);

    n->next = head;

    head = n;
}

void specialFun(node *&head)

{

    node *temp = head;

    while (temp->next != NULL)

    {

        if ((temp->data) % 2 == 0)

        {

            node *head2 = NULL;

            while (((temp->data) % 2 == 0) && (temp->next != NULL))

            {

                insertAtHead(head2, temp->data);

                temp = temp->next;
            }

            if ((temp->data) % 2 == 0)

            {

                insertAtHead(head2, temp->data);
            }

            display(head2);
        }

        else

        {

            cout << temp->data << " ";

            temp = temp->next;
        }
    }

    if ((temp->next == NULL) && ((temp->data) % 2 != 0))

    {

        cout << temp->data << " ";
    }
}

int main()

{

    node *head = NULL;

    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)

    {

        int num;

        cin >> num;

        insertAtTail(head, num);
    }

    //display(head);

    specialFun(head);
}