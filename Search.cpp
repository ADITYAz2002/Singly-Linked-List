#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
int search(Node *head, int x)
{
    if(head == NULL)
        return 0;
    
    int pos = 1;

    Node * curr = head;

    while(curr != NULL)
    {
        if(curr -> data != x)
        {
            curr = curr -> next;
            pos++;
        }
        else
            return pos;
    }
    return -1;
}

void printlist(Node *head)
{
    Node *curr=head;

    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);

	printlist(head);

	cout<<"Position of element in Linked List: "<<search(head,20);

	return 0;
} 