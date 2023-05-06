#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Default base" << endl;
    }
    Base(int x)
    {
        cout << "param base " << x << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Default derived" << endl;
    }
    Derived(int a)
    {
        cout << "param derived" << endl;
    }
    Derived(int x, int a) : Base(x)
    {
        cout << "param derived " << a << endl;
    }
};

class process
{
public:
    int id;
};

vector<process> P(10);

int main()
{
    // Derived d(10, 20);

    ifstream fin("testcase.txt");
    for (int i = 0; i < 6; i++)
    {
        fin >> P[i].id;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << P[i].id << endl;
    }
    return 0;
}