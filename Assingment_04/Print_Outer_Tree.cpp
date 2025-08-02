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
    Node *root = (val == -1) ? NULL : new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            p->left = new Node(l);
            q.push(p->left);
        }
        if (r != -1)
        {
            p->right = new Node(r);
            q.push(p->right);
        }
    }

    return root;
}

void left_outer_nodes(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    if (!root->left)
    {
        left_outer_nodes(root->right);
    }
    else
    {
        left_outer_nodes(root->left);
    }

    cout << root->val << " ";
}

void right_outer_nodes(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->val << " ";

    if (!root->right)
    {
        right_outer_nodes(root->left);
    }
    else
    {
        right_outer_nodes(root->right);
    }
}

int main()
{
    Node *root = input_tree();

    if (root->left != NULL)
    {
        left_outer_nodes(root->left);
    }

    cout << root->val << " ";

    if (root->right != NULL)
    {
        right_outer_nodes(root->right);
    }

    return 0;
}
