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

void is_ith_bit_set(unsigned int n, unsigned int k = 0)
{
    pb(n);
    pb(1 << k - 1);
    pb(n & (1 << k - 1));
}

int main() {
    is_ith_bit_set(13, 3);
    return 0;
}