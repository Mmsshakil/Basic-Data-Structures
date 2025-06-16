#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;

    // using loop
    //  for (int i = 1; i <= n; i++)
    //  {
    //      sum = sum + i;
    //  }

    // using formula
    sum = (n * (n + 1)) / 2;

    cout << sum << endl;

    return 0;
}