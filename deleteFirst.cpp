#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

Node* deleteFirstNode(struct Node* head)
{
    if(head == NULL)
        return NULL;
    
    Node* temp = head;

    head = head -> next;

    delete temp;

    return head;
}

void push(struct Node**head, int x)
{
    struct Node* new_node = new Node;

    new_node -> data = x;
    new_node -> next = *head;

    *head = new_node;
}

int main()
{
	/* Start with the empty list */
	Node* head = NULL;

	/* Use push() function to construct
	the below list 8 -> 23 -> 11 -> 29 -> 12 */
	push(&head, 12);
	push(&head, 29);
	push(&head, 11);
	push(&head, 23);
	push(&head, 8);

	head = deleteFirstNode(head);
	for (Node* temp = head; temp != NULL; temp = temp->next)
		cout << temp->data << " ";

	return 0;
}