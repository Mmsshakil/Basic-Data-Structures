#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    long long int val;
    Node *next;

    Node(long long int val)
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

void search_in_linked_list(Node *head, int searchVal)
{
    Node *temp = head;

    long long int count = 0;
    long long int index = 0;

    while (temp != NULL)
    {

        if (temp->val == searchVal)
        {
            count++;
            break;
        }

        index++;

        temp = temp->next;
    }

    if (count == 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << index << endl;
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

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
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

        long long int searchVal;
        cin >> searchVal;

        search_in_linked_list(head, searchVal);

        // print_linked_list(head);
    }

    return 0;
}