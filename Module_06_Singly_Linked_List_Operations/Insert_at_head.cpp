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

void insert_at_head(Node *&head, int val) // & because we want the change in the main function also
{
    Node *newNode = new Node(val); // here we made a node with new value that will insert in the main linked list

    newNode->next = head; // put the address of head node in the newnode next

    head = newNode; // now newNode will be head
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

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_head(head, 100); // call the insert function and pass the head and new value

    print_linked_list(head); // call the print function

    return 0;
}