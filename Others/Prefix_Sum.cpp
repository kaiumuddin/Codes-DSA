// Author
// kaium2909

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void init_code()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
#endif
}

int main()
{
    init_code();

    string s = "abcdabcdabc";
    cin >> s;
    int n = s.length();

    int pref[n + 1][26];

    for (int i = 0; i <= n; i++)
    {
        fill(pref[i], pref[i] + 26, 0);
    }

    for (int i = 1; i <= n; i++)
    {
        pref[i][s[i - 1] - 'a'] = 1;
        for (int j = 0; j < 26; j++)
        {
            pref[i][j] += pref[i - 1][j];
        }
    }

    int l = 1, r = n;
    char c = 'b';

    cout << pref[r][c - 'a'] - pref[l - 1][c - 'a'] << endl;

    return 0;
}

/*

*/