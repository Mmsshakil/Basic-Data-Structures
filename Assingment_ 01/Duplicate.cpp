#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;

    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            count++;
            break;
        }
    }

    if (count == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}