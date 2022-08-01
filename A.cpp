#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define p(x) cout << x << endl
#define pp(x, y) cout << x << " " << y << endl

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

    int t;
    cin >> t;

    while (t--)
    {
        int n, H, M;

        cin >> n >> H >> M;

        int mh = INT_MAX, mm = INT_MAX;

        while (n--)
        {
            int ah, am;
            cin >> ah >> am;
            int diff = 0;

            if (ah > H)
            {
                diff = (ah * 60 + am) - (H * 60 + M);
            }
            else if (ah == H)
            {
                if (am > M)
                {
                }
            }
            else
            {
                diff = (24 * 60) - (H * 60 + M);
                diff += (ah * 60 + am) - (0);
            }

            if (diff < mm)
                mm = diff;

            mh = diff / 60;
            mm = diff % 60;
        }

        cout << mh << " " << mm << endl;
    }
}