#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    cout << v.size() << endl;     // will show size of the vector
    cout << v.max_size() << endl; // maxsize of the vector
    cout << v.capacity() << endl; // current capacity of the vector, size always double kore base
    v.clear();                    // size will be clear but, still can print the value like v[1], v[2]
    v.empty();                    // it will check the vector is empty or not
    v.resize(10, 100);            // 10 is new size , 100 vale

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}