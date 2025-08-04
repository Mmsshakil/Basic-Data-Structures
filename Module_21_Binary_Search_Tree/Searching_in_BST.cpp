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

bool search(Node *root, int n) // we will use recursion to find out the number
{
    if (root == NULL) // if the root is NULL then it will stop the recursion
    {
        return false;
    }

    if (root->val == n) // if we found it then return true
    {
        return true;
    }

    if (root->val > n) // if the val is less than root then search in left side
    {
        return search(root->left, n);
    }
    else // if the val is larger than root then search in right side
    {
        return search(root->right, n);
    }
}

int main()
{
    Node *root = input_tree();

    int n;
    cin >> n;

    if (search(root, n))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}

// complexity of binary search tree is O(height)
// best : O(longN)
// wrost: O(N)