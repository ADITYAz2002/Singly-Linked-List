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

/*
        Naive Approach
    vector<int> a;

    for(Node* curr = head; curr != NULL; cur++)
        a.push_back(curr -> data);

    for(Node* curr = head; curr != NULL; cur++)
    {
        curr -> data = a.back();
        a.pop();
    }
    return head;

    auxiliary space: O(n) and Twice traversal;

        Iterative Approach

    Node* curr = head, *prev = NULL;

    while(curr != NULL)
    {
        Node* next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;        //prev is the new head!

    space: O(1), one traversal! 

*/
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