#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* reverse(Node* head)
{
    if(head == NULL || head -> next == NULL)
        return head;

    Node* curr = reverse(head -> next);

    head -> next -> next = head;

    head -> next = NULL;

    return curr;   
}

void printlist(Node* head)
{
    while(head != NULL)
    {
        cout<< head -> data<<" ";
        head = head -> next;
    }
}

int main()
{
    Node *head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(3);

    head = reverse(head);

    printlist(head);
}