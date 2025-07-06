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

void difference_between_min_max(Node *head)
{

    Node *temp = head;

    long long int min = temp->val;
    long long int max = temp->val;

    while (temp != NULL)
    {
        if (temp->val > max)
        {
            max = temp->val;
        }
        else if (temp->val < min)
        {
            min = temp->val;
        }

        temp = temp->next;
    }

    // cout << abs(max) - abs(min) << endl;
    cout << abs(max - min) << endl;

    // cout << max << " " << min << endl;
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

    difference_between_min_max(head);

    return 0;
}