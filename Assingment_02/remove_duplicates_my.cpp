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

// void delete_any_position(Node *&head, int idx)
// {
//     Node *temp = head;

//     for (int i = 1; i < idx; i++)
//     {
//         temp = temp->next;
//     }

//     // Node *deleteNode = temp->next;

//     temp->next = temp->next->next;
//     // delete deleteNode;
// }

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

// void remove_duplicate(Node *&head)
// {
//     Node *temp = head;

//     int idx = 0;

//     for (Node *i = temp; i->next != NULL; i = i->next)
//     {
//         int idx2 = idx + 1;

//         for (Node *j = i->next; j != NULL; j = j->next)
//         {
//             if (i->val == j->val)
//             {
//                 cout << "Match " << idx << " and " << idx2 << endl;
//                 delete_any_position(head, idx2);
//                 print_linked_list(head);
//             }

//             idx2++;
//         }

//         idx++;
//     }
// }

void remove_duplicates(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {

        for (Node *j = i->next, *prev = i; j != NULL;)
        {
            if (i->val == j->val)
            {
                prev->next = j->next;
                // delete j;
                j = prev->next; // don't move prev
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

    // remove_duplicate(head);
    remove_duplicates(head);

    // delete_any_position(head, 3);

    print_linked_list(head);

    return 0;
}