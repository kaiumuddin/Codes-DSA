#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s, x;
    cin >> s >> x;

    while (s.find(x) != -1) {
        s.replace(s.find(x), x.size(), "$");
    }

    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}