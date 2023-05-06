#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    void display()
    {
        printf("Display Parent\n");
    }
};
class Child 
{
public:
    void display()
    {
        printf("Display Child\n");
    }
};

int main()
{
    Child p;
    p.display();
    return 0;
}