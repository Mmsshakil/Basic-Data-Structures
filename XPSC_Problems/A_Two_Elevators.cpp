#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int time1 = a - 1;
        int time2 = abs(c - b) + (c - 1);

        if (time1 < time2)
        {
            cout << "1" << endl;
        }
        else if (time1 > time2)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "3" << endl;
        }
    }

    return 0;
}