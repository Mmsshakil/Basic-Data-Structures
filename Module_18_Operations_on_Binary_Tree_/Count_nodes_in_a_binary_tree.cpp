#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;

    if (root != NULL)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        // 1. ber kore ana
        Node *p = q.front();
        q.pop();

        // 2. oi node niya kaj kora
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;

        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }

        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }

        p->left = myLeft;
        p->right = myRight;

        // 3. children push kora

        if (p->left != NULL)
        {
            q.push(p->left);
        }

        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }

    return root;
}

void level_order(Node *root)
{

    int count = 0;
    if (root == NULL)
    {
        cout << "No Tree" << endl;
        return;
    }

    queue<Node *> q; // here we will push a node into a queue
    q.push(root);    // first push the root into the queue

    while (!q.empty())
    {
        // 1 . ber kore ana & queue ar front ta delete kora
        Node *f = q.front();
        q.pop();

        // 2. count korbo
        count++;

        // 3. j node ber korsi oi node ar children gula queue te push kora
        if (f->left != NULL)
        {
            q.push(f->left);
        }

        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }

    // return count;
    cout << "Total Node: " << count << endl;
}

int main()
{
    Node *root = input_tree();
    level_order(root);

    return 0;
}

// input: 10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1
// output: Total Node: 6