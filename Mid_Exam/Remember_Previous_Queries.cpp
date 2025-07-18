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

void print_forward(const list<int> &l)
{
    cout << "L -> ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}

void print_backward(const list<int> &l)
{
    list<int> temp = l;
    temp.reverse();

    cout << "R -> ";
    for (int i : temp)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l = {};

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int idx, val;
        cin >> idx >> val;

        if (idx == 0)
        {
            l.push_front(val);
            print_forward(l);
            print_backward(l);
        }
        else if (idx == 1)
        {
            l.push_back(val);
            print_forward(l);
            print_backward(l);
        }
        else if (idx == 2)
        {
            int size = l.size();
            if (val >= 0 && val < l.size()) 
            {
                l.erase(next(l.begin(), val));
                print_forward(l);
                print_backward(l);
            }
            else
            {
                print_forward(l);
                print_backward(l);
            }
        }
    }

    return 0;
}