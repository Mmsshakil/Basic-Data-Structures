#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;

    Student(string name, int roll, int mark)
    {
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
};

class cmp // this is the coustom compare class
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.mark < r.mark)
        {
            return true;
        }
        else if (l.mark > r.mark)
        {
            return false;
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
    priority_queue<Student, vector<Student>, cmp> pq; // here we use a coustom compare class

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, mark;
        cin >> name >> roll >> mark;

        Student obj(name, roll, mark);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        pq.pop();
    }

    return 0;
}