#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // input with size
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    // input without size
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}