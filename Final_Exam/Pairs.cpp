#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;

    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};

class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.name != r.name)
        {
            if (l.name > r.name)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if (l.roll < r.roll)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        cin >> name >> roll;

        Student obj(name, roll);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << endl;
        pq.pop();
    }

    return 0;
}