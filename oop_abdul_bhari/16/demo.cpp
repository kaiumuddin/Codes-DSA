#include <bits/stdc++.h>
using namespace std;

class Test
{
public:
    int a;
    static int count;
    Test()
    {
        a = 10;
        count++;
    }
    static int getCount()
    {
        return count;
    }
};
int Test::count = 0;
int main()
{
    Test t1, t2;
    cout << t1.count << endl;
    cout << t2.count << endl;
    cout << Test::count << endl;

    return 0;
}