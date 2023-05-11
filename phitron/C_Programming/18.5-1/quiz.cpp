#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + count(n / 10);
    }
}
int main() {

    cout << count(12345);
    return 0;
}