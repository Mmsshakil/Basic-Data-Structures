#include <bits/stdc++.h>
using namespace std;
int main()
{
    // set is STL of Binary Search Tree (BST)
    // set will delete duplicate value
    // set keep give data in asecding order
    set<int> s;

    int n;
    cin >> n;

    while (n--)
    {
        int val;
        cin >> val;
        s.insert(val);
    }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}

// input: 10
// 2 4 6 7 4 7 8 1 2 4

// output: 1 2 4 6 7 8