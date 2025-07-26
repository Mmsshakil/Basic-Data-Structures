#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        stack<char> st;

        for (char ch : s)
        {
            if (!st.empty() && ((ch == '1' && st.top() == '0') || (ch == '0' && st.top() == '1')))
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }

        if (st.empty() == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
