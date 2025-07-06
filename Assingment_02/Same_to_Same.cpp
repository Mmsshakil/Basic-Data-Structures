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

void check_same_to_same(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;

    int size1 = size_of_linked_list(head1);
    int size2 = size_of_linked_list(head2);

    int count = 0;

    if (size1 != size2)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {

        while (temp1 != NULL)
        {
            if (temp1->val != temp2->val)
            {
                count++;
            }

            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    if (count == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;

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
            insert_at_tail_optimize(head1, tail1, val);
        }
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;

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
            insert_at_tail_optimize(head2, tail2, val);
        }
    }

    check_same_to_same(head1, head2);

    // print_linked_list(head1);
    // print_linked_list(head2);

    return 0;
}