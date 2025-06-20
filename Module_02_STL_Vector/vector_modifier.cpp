#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 2, 6, 7, 2, 3, 2};

    // vector<int> v2;
    // v2 = v; // can copy a vector to another

    // v.push_back(6);                                // add value end of the vector
    // v.pop_back();                                  // remove value from end of the vector
    // v.insert(v.begin() + 2, 100);                  // v.begin() + 2 = 3 is position , 100 is the value
    // v.insert(v.begin() + 2, v2.begin(), v2.end()); // here we can insert a vector inside a vector
    // v.erase(v.begin() + 3);                        // this will erase value of the 4th index
    // v.erase(v.begin() + 1, v.begin() + 3);         // this will erase value from 1th index to 2th index
    // replace(v.begin(), v.end() - 1, 2, 100);       // replace(v.begin(),v.end(),value,replace_value)

    // vector<int>::iterator it = find(v.begin(), v.end(), 2); // find(v.begin(),v.end(),V)
    auto it = find(v.begin(), v.end(), 2); // find(v.begin(),v.end(),V)
    if (it == v.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << " Found" << endl;
    }

    for (int x : v)
    {
        cout << x << endl;
    }

    return 0;
}