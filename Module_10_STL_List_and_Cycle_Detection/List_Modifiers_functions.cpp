#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 20, 20, 40, 50, 60};

    // list<int> l2;
    // l2 = l; // we can assing like this
    // l2.assign(l.begin(), l.end()); // can assing like this also

    // l.push_back(100);  // insert value in the tail
    // l.push_front(200); // insert value in the head

    // l.pop_back();  // remove from tail
    // l.pop_front(); // remove from head

    // cout << *next(l.begin(), 2) << endl; // it will access the value of the 3rd index of the list

    // l.insert(next(l.begin(), 2), 100); // here 100 will be insert in index 3
    // list<int> l2 = {100, 200};
    // l.insert(next(l.begin(), 2), l2.begin(), l2.end()); // we can insert a list into a list on specific index

    // l.erase(next(l.begin(), 2));                     // delete an element from a list
    // l.erase(next(l.begin(), 2), next(l.begin(), 4)); // delete multiple value, 3 index to 4 index

    // replace(l.begin(), l.end(), 20, 99); // it will replace all 20 to 99

    auto it = find(l.begin(), l.end(), 20); // we will find 20 in the list, if dont get it the iterator will be in the lst of the list

    if (it == l.end()) // if iterator same as the end of the list then we get it
    {
        cout << "Did not get the value" << endl;
    }
    else
    {
        cout << "Get the value" << endl;
    }

    for (int i : l)
    {
        cout << i << endl;
    }

    return 0;
}