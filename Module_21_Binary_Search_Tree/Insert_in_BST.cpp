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

void insert(Node *&root, int val)
{
    Node *newNode = new Node(val); // make a new node that will insert in the tree

    if (root == NULL) // if the tree is empty then newnode will be the root
    {
        root = newNode;
        return;
    }

    if (root->val > val)
    {
        if (root->left == NULL)
        {
            root->left = newNode;
        }
        else
        {
            insert(root->left, val);
        }
    }
    else
    {

        if (root->right == NULL)
        {
            root->right = newNode;
        }
        else
        {
            insert(root->right, val);
        }
    }
}

void level_order_print(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1 .
        Node *f = q.front();
        q.pop();

        // 2.
        cout << f->val << " ";

        // 3.
        if (f->left != NULL)
        {
            q.push(f->left);
        }

        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
}

int main()
{
    Node *root = input_tree();

    int val;
    cin >> val;

    insert(root, val);

    level_order_print(root);

    return 0;
}

// input: 10 6 23 -1 9 19 29 7 -1 12 -1 -1 35 -1 -1 -1 -1 -1 -1
// 21

// output: 10 6 23 9 19 29 7 12 21 35