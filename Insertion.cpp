#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
    Node* new_node = new Node;

    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}

void insertAfter(struct Node* prev_node, int new_data)
{
    if(prev_node == NULL)
    {
        cout<<"Previous Node cannot be NULL";
        return;
    }

    Node* new_node = new Node;

    new_node -> data = new_data;
    new_node -> next = prev_node -> next;
    prev_node -> next = new_node;
}

void append(struct Node** head_ref, int new_data)
{
    Node* new_node = new Node;

    struct Node* last = new Node;

    new_node -> data = new_data;
    new_node -> next = NULL;
    
    if(*head_ref == NULL)
    {
        (*head_ref) = new_node;
        return;
    }

    while(last -> next == NULL)
        last = last -> next;
    
    last -> next = new_node;
}


/*
    Insertion at the beginning and at any random position is O(1)
    while inserting at the end is always O(N) as one has to traverse 
    till the end of the linked list
*/