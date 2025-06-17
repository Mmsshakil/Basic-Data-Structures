#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) // complexity O(N*N)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i << endl;
        }
    }

    return 0;
}

// in this code wrost case is O(N*N)
// so complexity is O(N*N)

// input - 3
//  output - 0 0 0 1 1 1 2 2 2