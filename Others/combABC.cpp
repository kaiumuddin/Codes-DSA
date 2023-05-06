#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define p(x) cout << x << endl
#define pp(x, y) cout << x << " " << y << endl
#define sp " "
#define nl printf("\n");

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

// const int mx = 10e6;
// char adjMat[mx][mx];
// int arr[mx];
// ll fact[mx];


// const int mx = 500000;
// int arr[mx];
// ll fact[mx];

string ans;

void comb(string& s, int i)
{
    if (i == s.size())
    {
        cout << ans << endl;
        return;
    }


    for (i; i < s.size(); i++)
    {

        ans.push_back(s[i]);
        comb(s, i + 1);
        ans.pop_back();
    }


    return;

}

void solve()
{

    string s = "AB";

    comb(s, 0);

}

int main()
{
    init_code();

    // int t; cin >> t; while (t--) { solve(); }
    solve();


}