#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    while (q--) {
        int x;
        cin >> x;

        int l = 0,
            r = n - 1;
        bool found = false;

        while (l <= r) {
            int m = (l + r) / 2;

            if (a[m] == x) {
                found = true;
                break;
            }
            else if (x > a[m]) {
                l = m + 1;
            }
            else {
                r = m - 1;
            }

        }

        if (found) cout << "found" << endl;
        else cout << "not found" << endl;
    }

    return 0;
}