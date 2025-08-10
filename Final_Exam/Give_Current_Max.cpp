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
        if (l.mark < r.mark) // max mark
        {
            return true;
        }
        else if (l.mark > r.mark)
        {
            return false;
        }
        else
        {
            if (l.roll > r.roll)
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
    // cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, mark;
        cin >> name >> roll >> mark;

        Student obj(name, roll, mark);
        pq.push(obj);
    }

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        int x;
        cin >> x;

        if (x == 0)
        {
            string name;
            int roll;
            int mark;
            cin >> name >> roll >> mark;
            Student obj(name, roll, mark);
            pq.push(obj);

            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        }
        else if (x == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (x == 2)
        {
            if (!pq.empty())
            {
                pq.pop();

                if (!pq.empty())
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    // while (!pq.empty())
    // {
    //     cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
    //     pq.pop();
    // }

    return 0;
}