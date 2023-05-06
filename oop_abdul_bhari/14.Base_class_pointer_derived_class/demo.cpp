#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    void fun1() { printf("func1"); }
    void fun2() { printf("func2"); }
    void fun3() { printf("func3"); }
};

class Derived : public Base
{
public:
    void fun4() { printf("func4"); }
    void fun5() { printf("func5"); }
};

int main()
{
    Derived *d = new Derived();
    Base *p = d;
    p->fun1();
    return 0;
}