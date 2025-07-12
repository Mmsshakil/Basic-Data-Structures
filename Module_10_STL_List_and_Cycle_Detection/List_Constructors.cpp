#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> myList = {1, 2, 3, 4, 5, 6, 7};
    // list<int> myList; // initial a list
    // list<int> myList(5); // initial a list and size in 5
    // list<int> myList(5, 3);    // 5 is size and 3 is all value
    // list<int> myList2(myList); // here we copy mylist to mylist2

    // int a[] = {10, 20, 30};
    // list<int> myList(a, a + 3); // copy a array inside a inked list

    vector<int> v = {10, 20, 30};
    list<int> myList(v.begin(), v.end()); // copy a vector inside a inked list

    // this loop will print the linked list
    // for (auto i = myList.begin(); i != myList.end(); i++)
    // {
    //     cout << *i << endl;
    // }

    for (int i : myList)
    {
        cout << i << endl;
    }

    // cout << *myList.begin() << endl;
    // cout << myList.size() << endl;
    return 0;
}