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

void remove_rightmost_set_bit(unsigned int n)
{
    pb(n);
    pb(n - 1);
    pb(n & (n - 1));
}

void find_position_of_rightmost_set_bit(unsigned int n)
{
    pb(n);
    pb(n - 1);
    pb(~(n - 1));
    pb(n & ~(n - 1));
}

int main() {
    remove_rightmost_set_bit(14);
    printf("--------------------------------\n");
    find_position_of_rightmost_set_bit(1);
    return 0;
}