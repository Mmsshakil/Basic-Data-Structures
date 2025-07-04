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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val); // here we made a node with new value that will insert in the main linked list

    if (head == NULL) // if we want to insert a NULL linked list it will make the newNode is head
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;

        while (temp->next != NULL) // we use this loop because to get the last head and it's next NULL
        {
            temp = temp->next;
        }
        // cout << temp->next << endl; // output will be 0 means NULL
        temp->next = newNode;
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
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_tail(head, 1000); // call the insert function and pass the head and new value

    print_linked_list(head); // call the print function

    return 0;
}