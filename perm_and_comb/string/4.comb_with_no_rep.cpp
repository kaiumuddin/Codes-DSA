// all permutation of a,b,c
// 3P0, 3P1, 3P2, 3P3
// all combinations of a,b,c
// 3C0, 3C1, 3C2, 3C3

#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
vector<bool> taken(100);

void f(string& a, int times, string ans = "", int i = 0)
{
    cout << ++cnt << " : " << ans << endl; // all 1,2,3
    // if (ans.length() == times)
    // {
    //     cout << ++cnt << " : " << ans << endl;
    //     return;
    // }
    if (i == a.length())
        return;

    for (i = i; i < a.length(); i++) // i = i ; for comb with rep, comb with no rep
    {
        if (i > 0 && a[i] == a[i - 1]) continue;


        ans.push_back(a[i]);

        f(a, times, ans, i + 1); // i + 1; for comb with no rep

        ans.pop_back();
    }

}

void ff(string& a, int times = 0, string ans = "", int i = 0)
{

    if (i == a.length()) {
        cout << ++cnt << " : " << ans << endl; // all 1,2,3
        return;
    }

    ff(a, times, ans, i + 1);
    ff(a, times, ans + a[i], i + 1);
}

// void f(string s = "abc", int i = 0, string ans = "")
// {
//     static int cnt = 0;
//     if (i < 0) {
//         cout << ++cnt << " : " << ans << endl;
//     }
//     else {
//         f(s, i - 1, ans);
//         f(s, i - 1, ans + s[i]);
//     }

// }

int main()
{
    string a{ "abc" };
    ff(a, 3); // nCr / nPr
}