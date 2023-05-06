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
    if (i == a.length() or ans.length() == a.length())
        return;

    for (i = 0; i < a.length(); i++) // i = 0; for perm with rep
    {
        if (i > 0 && a[i] == a[i - 1]) continue; // duplicate checking


        ans.push_back(a[i]);

        f(a, times, ans, i);

        ans.pop_back();
    }

}

int all_perm(vector<int>& arr, int target, vector<int>& t, vector<vector<int>>& all)
{
    if (target == 0) {
        all.push_back(t);
        return 1;
    }
    if (target < 0) return 0;

    int sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        t.push_back(arr[i]);
        sum += all_perm(arr, target - arr[i], t, all);
        t.pop_back();
    }
    return sum;
}



int main()
{
    string a{ "abc" };
    f(a, 3); // nCr / nPr
}