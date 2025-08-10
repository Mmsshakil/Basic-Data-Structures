#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);

        map<string, int> count;
        string maxWord = "";
        int maxCount = 0;

        string word;
        while (ss >> word)
        {
            count[word]++;
            if (count[word] > maxCount)
            {
                maxCount = count[word];
                maxWord = word;
                // cout << maxCount << " " << maxWord << endl;
            }
        }

        cout << maxWord << " " << maxCount << "\n";
    }

    return 0;
}
