#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4, 5, 6, 7, 8};

    cout << l.front() << endl;           // print the head
    cout << l.back() << endl;            // print the tail
    cout << *next(l.begin(), 1) << endl; // print the value of index 1

    cout << *l.begin() << endl;

    return 0;
}