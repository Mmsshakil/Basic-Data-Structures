#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(int n)
{
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> pre(n);
    pre[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    return pre;
}

int main()
{
    int n;
    cin >> n;

    vector<int> preArray = runningSum(n);

    for (int i = 0; i < n; i++)
    {
        cout << preArray[i] << " ";
    }

    return 0;
}