#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        int l = 0, r = n - 1;
        int count = 0;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == x)
            {
                count++;
                break;
            }
            else if (v[mid] < x)
            {
                l = mid + 1;
            }
            else if (v[mid] > x)
            {
                r = mid - 1;
            }
        }

        if (count == 0)
        {
            cout << "not found" << endl;
        }
        else
        {
            cout << "found" << endl;
        }
    }

    return 0;
}