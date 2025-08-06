#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int val;
    cin >> val;
    v.push_back(val); // new value the sobar sas a add korbo

    int cur_idx = v.size() - 1; // akhn current index ta hbe sas a j value ta insert korsi saitar index

    while (cur_idx != 0) // loop ta colbe jotokhn porjonto current index 0 te asa nai
    {
        int par_idx = (cur_idx - 1) / 2; // parent index ber korbe protibar
        if (v[par_idx] < v[cur_idx])     // jodi parent index ar value child/current index ar thake choto hoy tahole swap korbe, r nahole aikhanai break
        {
            swap(v[par_idx], v[cur_idx]);
        }
        else
        {
            break;
        }

        cur_idx = par_idx; // jodi swap hoy tahole current index tai akhn parrent abar loop colbe
    }

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}

// child_idx = parent_idx * 2 + 1, parent_idx * 2 + 2
// parent_idx = (child_idx - 1) / 2;

// in max heap always parent will be bigger than the children
// always new node will be insert in traversal order
// in heap always first input in the left side
// complexity of insertion is O(logN)

// input: 10
// 23 15 21 13 9 19 8 2 4 7
// 18
// output: 23 18 21 13 15 19 8 2 4 7 9