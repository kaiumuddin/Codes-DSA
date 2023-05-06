#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<string> v;

  for (int i = 0; i < 2 * n - 2; i++) {
    string a;
    cin >> a;
    if (a.size() == n - 1) {
      v.push_back(a);
    }
  }

  reverse(v[0].begin(), v[0].end());
  if (v[0] == v[1]) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}