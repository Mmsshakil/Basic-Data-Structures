#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {1, 2, 3, 4, 5}; //  vector initialize with value
    // vector<int> v;                   // vector initialize without size
    // vector<int> v(10);               // vector initialize with size
    // vector<int> v(10, -1);           // vector initialize with size and value
    // vector<int> v2(v);               // vector initialize with another vector, it will copy another vector

    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> v(arr, arr + 5); // vector initialize with an array, we can copy an array and put inside a vector

    for (int i = 0; i < v.size(); i++) // vector is like a array
    {
        cout << v[i] << endl;
    }

    cout << v.size() << endl;

    return 0;
}