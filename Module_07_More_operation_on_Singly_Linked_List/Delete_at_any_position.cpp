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

void delete_any_position(Node *&head, int idx)
{
    Node *temp = head;

    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next; // jeta delete korbo tar ager ta thakbe temp a aijonne temp->next ta deleteNode a rakhbo

    // cout << deleteNode->val << endl;

    temp->next = temp->next->next; // temp mane delete jeta korbo tar ager ta, temp->next to delete korbo, r ar porer ta temp->next->next tar address thakbe akhn temp next a

    delete deleteNode;
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

    // int idx;
    // cin >> idx;

    // delete_any_position(head, 3); // index count hobe 0 thake
    print_linked_list(head);

    return 0;
}

// input: 10 20 30 40 50 60 -1

// output: 10 20 30 50 60