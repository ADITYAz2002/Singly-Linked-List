#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;

    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

int main() 
{ 
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->next=temp2;
	cout<<head->data<<"-->"<<temp1->data<<"-->"<<temp2->data;
	return 0;
} 

/*
struct Node
{
    int data;
    struct Node* next;
};

void printList(Node *node)
{
    while(node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
}
int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;

    head = new Node;
    second = new Node;
    third = new Node;

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = NULL;

    printList(head);
    
    return 0;
}
*/
