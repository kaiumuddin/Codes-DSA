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

    for (i = 0; i < a.length(); i++)
    {
        if (i > 0 && a[i] == a[i - 1]) continue;
        if (taken[i]) continue;

        ans.push_back(a[i]);
        taken[i] = 1;
        f(a, times, ans, i);
        taken[i] = 0;
        ans.pop_back();
    }

}



int main()
{
    string a{ "abc" };
    f(a, 3); // nCr / nPr
}