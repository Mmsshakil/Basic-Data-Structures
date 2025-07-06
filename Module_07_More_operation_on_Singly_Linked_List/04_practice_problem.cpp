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

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail_optimize(Node *&head, int val, Node *&tail)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void insert_at_any_position(Node *&head, int idx, int val)
{
    Node *newNode = new Node(val);

    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int size_of_linked_list(Node *head)
{
    int size = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
}

void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }
        else
        {
            insert_at_tail_optimize(head, val, tail);
        }
    }

    // int size = size_of_linked_list(head);
    // cout << "Size: " << size << endl;

    int idx, newValue;
    while (cin >> idx >> newValue)
    {
        int size = size_of_linked_list(head);

        if (idx == 0)
        {
            insert_at_head(head, newValue);
            print_linked_list(head);
        }
        else if (idx == size - 1)
        {
            insert_at_tail_optimize(head, newValue, tail);
            print_linked_list(head);
        }
        else if (idx > size)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_at_any_position(head, idx, newValue);
            print_linked_list(head);
        }
    }

    return 0;
}