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

void level_order(Node *root)
{
    queue<Node *> q; // here we will push a node into a queue
    q.push(root);    // first push the root into the queue

    while (!q.empty())
    {
        // 1 . ber kore ana & queue ar front ta delete kora
        Node *f = q.front();
        q.pop();

        // 2. ber kore ana noder val print kora
        cout << f->val << " ";

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
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->right = b;

    a->left = c;

    b->left = d;
    b->right = e;

    level_order(root);

    return 0;
}

// output: 10 20 30 40 50 60