#include <bits/stdc++.h>
using namespace std;

int main()
{
    bitset<5> x(string("01010"));
    bitset<5> y(string("01010"));

    cout << (x ^ y) << endl;
}