#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[n];          // here always index is int type, and value can be integer or string anything
    map<string, int> mp; // string is the index type, and int is the value type

    mp["rahim"] = 3; // map_name[key] = val; //complexity: O(logN)
    mp["karim"] = 7;
    mp["sakib"] = 2;

    // cout << mp["rahim"] << endl; // we can print value like this
    // cout << mp["sabbir"] << endl; // this is not included in the map thats why it will print 0

    // if (mp.count("sabbir")) // 0 ar problem solve korar jonne aita use korbo
    // {
    //     cout << "ache" << endl;
    // }
    // else
    // {
    //     cout << "Nai" << endl;
    // }

    for (auto it = mp.begin(); it != mp.end(); it++) // complexity: O(NlogN)
    {
        cout << it->first << " " << it->second << endl; // complexity: O(logN)
    }

    return 0;
}