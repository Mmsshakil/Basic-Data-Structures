#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {5, 9, 1, 4, 2, 3, 4, 2, 5, 6, 7};

    l.remove(2);            // remove all 2 from list
    l.sort();               // assanding sort the linked list
    l.sort(greater<int>()); // desanding sort
    l.unique();             // delete duplicate value, but after sort
    l.reverse();            // reverse the function

    for (int i : l)
    {
        cout << i << endl;
    }

    return 0;
}