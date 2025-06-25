#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int x, l = 0, r = n - 1, count = 0;
    cin >> x;

    while (l <= r)  // complexity of binary search is logN
    {
        int mid = (l + r) / 2;

        if (v[mid] == x)
        {
            count++;
            cout << v[mid];
            break;
        }
        else if (v[mid] > x)
        {

            r = mid - 1;
        }
        else if (v[mid] < x)
        {
            l = mid + 1;
        }
    }

    if (count == 0)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    return 0;
}