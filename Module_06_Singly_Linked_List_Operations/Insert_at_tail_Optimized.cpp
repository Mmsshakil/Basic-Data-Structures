#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int val, Node *&tail)
{
    Node *newNode = new Node(val); // here we made a node with new value that will insert in the main linked list

    if (head == NULL) // if we want to insert a NULL linked list it will make the newNode is head
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode; // here we replace the tail's next NULL with newNode
        tail = newNode;       // and we make the newNode as tail
        // tail = tail->next; // same as before line
    }
}

void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{

    // Node *head = NULL;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->next = tail;

    insert_at_tail(head, 1000, tail); // call the insert function and pass the head and new value
    insert_at_tail(head, 2000, tail); // call the insert function and pass the head and new value

    print_linked_list(head); // call the print function

    return 0;
}