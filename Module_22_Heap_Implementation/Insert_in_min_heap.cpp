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

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int val;
    cin >> val;
    v.push_back(val);

    int cur_idx = v.size() - 1;

    while (cur_idx != 0)
    {
        int par_idx = (cur_idx - 1) / 2;
        if (v[par_idx] > v[cur_idx])
        {
            swap(v[par_idx], v[cur_idx]);
        }
        else
        {
            break;
        }

        cur_idx = par_idx;
    }

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}

// child_idx = parent_idx * 2 + 1, parent_idx * 2 + 2
// parent_idx = (child_idx - 1) / 2;

// in min heap always parent will be smaller than the children
// always new node will be insert in traversal order
// in heap always first input in the left side

// input: 10
// 23 15 21 13 9 19 8 2 4 7
// 18
// output: 23 15 21 13 9 19 8 2 4 7 18