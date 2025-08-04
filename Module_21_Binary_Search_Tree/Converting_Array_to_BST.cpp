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

Node *convert(int arr[], int n, int l, int r)
{

    while (l > r) // jokhn left right ar thake boro hoya jay tokhn loop ta bondho hbe
    {
        return NULL;
    }

    int mid = (l + r) / 2;           // first find the mid of the array
    Node *root = new Node(arr[mid]); // make a root node with this mid value

    Node *leftRoot = convert(arr, n, l, mid - 1);
    Node *rightRoot = convert(arr, n, mid + 1, r);

    root->left = leftRoot;
    root->right = rightRoot;

    return root;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Node *root = convert(arr, n, 0, n - 1);
    level_order_print(root);

    return 0;
}

// input: 6
// 2 5 8 11 15 18

// output: 8 2 15 5 11 18