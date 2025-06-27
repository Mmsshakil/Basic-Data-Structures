#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int spac1 = n - 2;
    int spac2 = 1;
    int spac3 = (n - 1) / 2;
    int spac4 = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i == (n + 1) / 2)
        {
            for (int k = 1; k <= spac3; k++)
            {
                cout << " ";
            }

            cout << "X";
        }
        else if (i < (n + 1) / 2)
        {

            for (int k = 0; k < spac4; k++)
            {
                cout << " ";
            }

            cout << "\\";
            for (int j = 1; j <= spac1; j++)
            {
                cout << " ";
            }

            cout << "/";
            spac1 -= 2;
            spac4 += 1;
        }

        else if (i > (n + 1) / 2)
        {

            for (int k = 0; k < spac3 - 1; k++)
            {
                cout << " ";
            }

            cout << "/";

            for (int j = 1; j <= spac2; j++)
            {
                cout << " ";
            }

            cout << "\\";
            spac2 += 2;
            spac3 -= 1;
        }

        cout << endl;
    }

    return 0;
}