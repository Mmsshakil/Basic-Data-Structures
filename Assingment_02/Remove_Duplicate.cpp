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


// need more research on this function
void remove_duplicates(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i->next, *prev = i; j != NULL;)
        {
            if (i->val == j->val)
            {
                prev->next = j->next;
                j = prev->next;
            }
            else
            {
                prev = j;
                j = j->next;
            }
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        long long int val;
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

    remove_duplicates(head);

    print_linked_list(head);

    return 0;
}