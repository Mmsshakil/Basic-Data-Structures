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

void reverse_doubly(Node *head, Node *tail)
{
    // for (int i = 0, j = n - 1; i < j; i++, j--)
    // {
    //     swap(i, j);
    // }

    for (Node *i = head, *j = tail; i < j; i = i->next, j = j->prev)
    {
        swap(i->val, j->val);
    }
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
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }

        insert_at_tail(head, tail, n);
    }

    reverse_doubly(head, tail);
    print_forward(head);

    return 0;
}