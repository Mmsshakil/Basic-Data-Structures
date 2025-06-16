#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;    // complexity O(1)
    cin >> n; // complexity O(1)

    for (int i = 1; i <= n; i *= 2) // complexity O(logn)
    {
        cout << i << endl;
    }

    return 0; // complexity O(1)
}

// in this code wrost case is O(logn)
// so complexity is O(logn)

// input - 100
//  output - 1 2 4 8 16 32 64