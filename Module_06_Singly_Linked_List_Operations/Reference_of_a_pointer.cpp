#include <bits/stdc++.h>
using namespace std;

void fun(int *&p) // if we use &, it will pass address also
{
    p = NULL;
}

int main()
{
    int x = 10;
    int *p = &x;

    fun(p);
    cout << "In main: " << p << endl;

    return 0;
}

// output: In main: 0

// if we want to sent a pointer in a function and change something , and we want the change in main function also. In this situtation we need sent the address/ reference also in the function