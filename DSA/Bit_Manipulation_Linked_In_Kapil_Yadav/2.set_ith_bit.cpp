#include <bits/stdc++.h>
using namespace std;

void pb(unsigned int n)
{
    // print integer in binary
    for (int i = 31; i >= 0; i--)
    {
        if (n & (1 << i))
            cout << 1;
        else cout << 0;
    }
    cout << " : "; cout << n << endl;
}

void set_ith_bit(unsigned int n, unsigned int k = 0)
{
    pb(n);
    pb(1 << k - 1);
    pb(n | (1 << k - 1));
}

int main() {
    set_ith_bit(13, 2);
    return 0;
}