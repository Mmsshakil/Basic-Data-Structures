#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    l.clear(); // it will clear the list

    if (l.empty()) // it will check empty or not
    {
        cout << "Empty List" << endl;
    }
    else
    {
        cout << "Not Empty List" << endl;
    }

    l.resize(5, 100); // 5 will be new size of list, 100 will be value

    cout << l.size() << endl;
    return 0;
}
