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

void print_level(Node *root, int level)
{
    if (root == NULL)
    {
        return;
    }

    if (level == 0)
    {
        cout << root->val << " ";
        return;
    }

    // aikhane protiabar a level komabo jate komte komte amader main target level a jaite pari; 3,2,1,0 tarmane 4 bar colar por level print hobe
    print_level(root->left, level - 1);
    print_level(root->right, level - 1);
}

int max_depth(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftDepth = max_depth(root->left);
    int rightDepth = max_depth(root->right);

    return max(leftDepth, rightDepth) + 1;
}

int main()
{
    Node *root = input_tree();

    int level;
    cin >> level;

    if (level >= max_depth(root))
    {
        cout << "Invalid" << endl;
    }
    else
    {
        print_level(root, level);
    }

    return 0;
}
