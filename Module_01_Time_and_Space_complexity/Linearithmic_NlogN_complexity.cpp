#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) // complexity O(NlogN)
    {
        for (int j = 1; j <= n; j *= 2)
        {
            cout << i << endl;
        }
    }

    return 0;
}

// in this code wrost case is O(NlogN)
// so complexity is O(NlogN)

// input - 3
//  output - 1 1 2 2 3 3