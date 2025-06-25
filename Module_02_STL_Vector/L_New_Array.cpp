#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> v2(n);
    vector<int> v3;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    v3.insert(v3.begin(), v2.begin(), v2.end());
    v3.insert(v3.end(), v.begin(), v.end());

    for (int i = 0; i < n + n; i++)
    {
        cout << v3[i] << " ";
    }

    return 0;
}