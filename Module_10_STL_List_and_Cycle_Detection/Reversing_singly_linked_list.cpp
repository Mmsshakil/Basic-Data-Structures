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

void insert_at_tail_optimize(Node *&head, Node *&tail, int val)
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

// we will use recursion to print the linked list in reverse
void reverse_linked_list(Node *&head, Node *tmp, Node *&tail)
{
    if (tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    // for straight write code here
    reverse_linked_list(head, tmp->next, tail);
    // for reverse write code here

    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
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
            insert_at_tail_optimize(head, tail, val);
        }
    }

    reverse_linked_list(head, head, tail);
    print_linked_list(head);

    return 0;
}