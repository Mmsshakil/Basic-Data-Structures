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

void insert_at_any_position(Node *&head, Node *&tail, int val, int idx)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    cout << temp->val << endl;

    newNode->next = temp->next;
    temp->next->prev = newNode;

    temp->next = newNode;
    newNode->prev = temp;
}

void print_forward(Node *head)
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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;

    int idx;
    cin >> idx;

    insert_at_any_position(head, tail, 100, 3);
    print_forward(head);

    return 0;
}