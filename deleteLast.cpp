#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};
Node* delLast(struct Node* head)
{
    if(head == NULL)
        return NULL;
    
    if(head -> next == NULL)
    {
        delete head;
        return NULL;
    }

    Node* secondLast = head;

    while(secondLast -> next -> next != NULL)
        secondLast = secondLast -> next;
    
    delete(secondLast ->next);

    secondLast -> next = NULL;

    return head;
}

void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node = new Node;
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
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

	head = delLast(head);
	for (Node* temp = head; temp != NULL; temp = temp->next)
		cout << temp->data << " ";

	return 0;
}