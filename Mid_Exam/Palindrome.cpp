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

void check_palindrom(Node *&head, Node *&tail, int count)
{

    // Node *tempHead = head;
    // Node *tempTail = tail;

    bool flag = true;

    for (Node *tempHead = head, *tempTail = tail; count > 0; tempHead = tempHead->next, tempTail = tempTail->prev, count = count - 2)
    {
        if (tempHead->val != tempTail->val)
        {
            flag = false;
            break;
        }
    }

    if (flag == true)
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
    Node *head = NULL;
    Node *tail = NULL;

    int count = 0;

    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }

        insert_at_tail(head, tail, n);
        count++;
    }

    check_palindrom(head, tail, count);

    // print_forward(head);

    return 0;
}