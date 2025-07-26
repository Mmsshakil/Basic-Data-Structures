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
            if (ch == '1' && !st.empty() && st.top() == '0')
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
