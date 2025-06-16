#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;    // complexity O(1)
    cin >> n; // complexity O(1)

    for (int i = 1; i <= sqrt(n); i++) // complexity O(sqrt(n))
    // for (int i = 1; i*i <= n; i++)
    {
        cout << i << endl;
    }

    return 0; // complexity O(1)
}

// in this code wrost case is O(logn)
// so complexity is O(logn)

// input - 100
//  output - 1 2 3 4 5 6 7 8 9 10