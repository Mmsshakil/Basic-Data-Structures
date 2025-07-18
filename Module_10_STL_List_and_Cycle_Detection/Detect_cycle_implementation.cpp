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

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(10);
    Node *b = new Node(10);
    Node *c = new Node(10);
    Node *d = new Node(10);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;

    Node *slow = head;
    Node *fast = head;

    int count = 0;

    while (fast != NULL && fast->next != NULL)
    {

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            count++;
            break;
        }
    }

    if (count == 0)
    {
        cout << "Circel Not Found" << endl;
    }
    else
    {
        cout << "Circel Found" << endl;
    }

    return 0;
}