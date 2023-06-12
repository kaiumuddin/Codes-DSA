#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;

    long long a[n] = { 0 };
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long pre[n] = { 0 };
    pre[0] = a[0];
    for (long long i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + a[i];
    }

    while (q--) {
        long long l, r;
        cin >> l >> r;
        l--; r--;

        if (l == 0)
            cout << pre[r] << endl;
        else
            cout << pre[r] - pre[l - 1] << endl;
    }


    return 0;
}