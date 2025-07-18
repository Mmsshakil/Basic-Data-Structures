#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// /////////////////////////////////////////////////////

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *temp = head;
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *temp = tail;
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_any_position(Node *&head, Node *&tail, int val, int idx)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }
    else
    {
        tail = newNode;
    }

    temp->next = newNode;
}

// /////////////////////////////////////////////////////

void print_forward(Node *head)
{
    Node *temp = head;
    cout << "L -> ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    Node *temp = tail;
    cout << "R -> ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int size_of_list(Node *head)
{
    Node *temp = head;
    int size = 0;

    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int idx, val;
        cin >> idx >> val;
        int size = size_of_list(head);

        if (size == 0) //  empty list first
        {
            if (idx == 0)
            {
                insert_at_head(head, tail, val);
                print_forward(head);
                print_backward(tail);
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
        else if (idx == 0) // insert at head
        {
            insert_at_head(head, tail, val);
            print_forward(head);
            print_backward(tail);
        }
        else if (idx == size) // insert at tail
        {
            insert_at_tail(head, tail, val);
            print_forward(head);
            print_backward(tail);
        }
        else if (idx > size || idx < 0) // invalid
        {
            cout << "Invalid" << endl;
        }
        else // insert at any
        {
            insert_at_any_position(head, tail, val, idx);
            print_forward(head);
            print_backward(tail);
        }
    }

    return 0;
}