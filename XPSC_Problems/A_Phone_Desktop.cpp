#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;

        int screen = y / 2;
        int baki = screen * 7;

        if (y % 2 != 0)
        {
            screen++;
            baki = baki + 11;
        }

        if (x > baki)
        {
            x = x - baki;
            screen = screen + x / 15;

            if (x % 15 != 0)
            {
                screen = screen + 1;
            }
        }

        cout << screen << endl;
    }

    return 0;
}