#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;

    void push(int n)
    {
        v.push_back(n);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.front();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack a;
    a.push(10);
    a.push(20);
    a.push(30);

    if (!a.empty()) // need to check before top and pop
    {
        cout << a.top() << endl;
    }

    cout << a.size() << endl;

    return 0;
}