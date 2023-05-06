#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual void display() = 0;
};
class Innova : public Base
{
public:
    void display()
    {
        printf("Display Innova\n");
    }
};

class Swift : public Base
{
public:
    void display()
    {
        printf("Display Swift\n");
    }
};

int main()
{
    Base *p[2];
    Base *b = new Innova();
    p[0] = b;
    b = new Swift();
    p[1] = b;

    p[0]->display();
    p[1]->display();
    return 0;
}