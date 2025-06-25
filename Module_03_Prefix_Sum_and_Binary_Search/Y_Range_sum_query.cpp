#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<long long int> pre(n + 1);
    pre[1] = v[1];

    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    for (int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;

        if (l == 1)
        {
            cout << pre[r] << endl;
        }
        else
        {
            cout << pre[r] - pre[l - 1] << endl;
        }
    }

    return 0;
}