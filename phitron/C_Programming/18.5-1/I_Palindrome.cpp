#include<bits/stdc++.h>
using namespace std;

bool fun(string& s, int i, int j) {
    if (i > j) return true;
    return s[i] == s[j] && fun(s, i + 1, j - 1);
}

int main() {
    string s;
    cin >> s;
    cout << (fun(s, 0, s.size() - 1) == 1 ? "YES" : "NO") << endl;
    return 0;
}