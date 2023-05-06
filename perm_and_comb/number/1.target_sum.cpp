// all permutation of a,b,c
// 3P0, 3P1, 3P2, 3P3
// all combinations of a,b,c
// 3C0, 3C1, 3C2, 3C3

#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
vector<bool> taken(100);

void f(vector<int>& a, int times, string ans = "", int i = 0)
{
    cout << ++cnt << " : " << ans << endl; // all 1,2,3
    // if (ans.length() == times)
    // {
    //     cout << ++cnt << " : " << ans << endl;
    //     return;
    // }
    if (i == a.size())
        return;

    for (i = i; i < a.size(); i++) // i = i ; for comb with rep, comb with no rep
    {
        if (i > 0 && a[i] == a[i - 1]) continue;


        ans.push_back(a[i]);

        f(a, times, ans, i + 1); // i + 1; for comb with no rep

        ans.pop_back();
    }

}


int main()
{
    vector<int> a{ 1,2,2 };
    f(a, 3); // nCr / nPr
}