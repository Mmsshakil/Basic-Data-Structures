#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;                            // initialize of max priority queue
    // priority_queue<int, vector<int>, greater<int>> pq; // initialize of min priority queue

    pq.push(10); // insert value in the priority queue
    pq.push(20);
    pq.push(5);
    pq.push(30);

    cout << pq.top() << endl; // top will print the top of the priority queue and it is max val
    pq.pop();                 // will remove the top
    cout << pq.size() << endl;

    if (pq.empty())
    {
        cout << "YES Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    return 0;
}