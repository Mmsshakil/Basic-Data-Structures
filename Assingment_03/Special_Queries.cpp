#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    queue<string> q;

    for (int i = 0; i < t; i++)
    {
        int n;
        string s;

        cin >> n;

        if (n == 0)
        {
            cin >> s;
            q.push(s);
        }

        if ((!q.empty()) && (n == 1))
        {
            cout << q.front() << endl;
            q.pop();
        }
        else if ((q.empty()) && (n == 1))
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}