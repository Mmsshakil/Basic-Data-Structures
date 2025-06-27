#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    // here we take input the array
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // we make a prefix sum from 0 to n-1
    vector<int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    // we make another prefix sum from n-1 to 0
    vector<int> pre2(n);
    pre2[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        pre2[i] = pre2[i + 1] + v[i];
    }

    // then  we compare when the value of these prefix array match, and the match index is the ans
    for (int i = 0; i < n; i++)
    {
        if (pre[i] == pre2[i])

        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}

// input: 7
// -7 1 5 2 -4 3 0

// output: 3