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

    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    int pref[n + 1];
    fill(pref, pref + n, 0);

    for (int i = 1; i <= n; i++)
    {
        int t = s[i - 1] - 'a' + 1;
        pref[i] = pref[i - 1] + t;
    }

    // for (int i = 0; i <= n; i++)
    //     cout << pref[i] << " ";
    // cout << endl;

    for (int j = 1; j <= q; j++)
    {
        int l, r;
        cin >> l >> r;

        cout << pref[r] - pref[l - 1] << endl;
    }

    return 0;
}

/*

*/