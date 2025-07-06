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

void insert_at_head(Node *&head, int val, Node *&tail)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
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

// ////////////////////////////////////////

void delete_head(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return;
    }

    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;

    if (head == NULL)
    {
        tail = NULL;
    }
}

void delete_at_tail(Node *&head, Node *&tail, int idx)
{

    if (head == NULL || idx == 0)
    {
        delete_head(head, tail);
        return;
    }

    Node *temp = head;

    for (int i = 1; i < idx; i++)
    {
        if (temp->next == NULL)
        {
            return;
        }
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = NULL;
    tail = temp;
    delete deleteNode;
}

void delete_any_position(Node *&head, int idx)
{

    if (head == NULL)
    {
        return;
    }

    Node *temp = head;

    for (int i = 1; i < idx; i++)
    {

        if (temp == NULL || temp->next == NULL)
        {
            return;
        }

        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        return;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

// ///////////////////////////////////////

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

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int idx, newValue;
        cin >> idx >> newValue;

        int size = size_of_linked_list(head);
        // cout << "Size: " << size << endl;

        if (idx == 0)
        {
            insert_at_head(head, newValue, tail);
            print_linked_list(head);
        }
        else if (idx == 1)
        {
            insert_at_tail_optimize(head, newValue, tail);
            print_linked_list(head);
        }
        else if (idx == 2)
        {
            if (newValue == 0)
            {
                delete_head(head, tail);
                print_linked_list(head);
            }
            else if (newValue == size - 1)
            {
                delete_at_tail(head, tail, newValue);
                print_linked_list(head);
            }

            else if (newValue < 0 || newValue >= size)
            {
                print_linked_list(head); 
            }

            else
            {
                delete_any_position(head, newValue);
                print_linked_list(head);
            }
        }
    }

    return 0;
}