#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define p(x) cout << x << endl
#define pp(x, y) cout << x << " " << y << endl
#define sp " "
#define nl printf("\n");

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu() { cerr << endl; }
template < typename T, typename ... hello>void faltu(T arg, const hello &... rest) { cerr << arg << ' ';faltu(rest...); }

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

void init_code()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
#endif
}

void pvi(vector<int> arr) // print 1d arr
{
    for (auto e : arr) cout << e << " ";
    cout << endl;
}

void pvvi(vector<vector<int>>& all) // print 2d arr
{
    int cnt = 0;
    for (auto r : all) {
        cout << ++cnt << " : [ ";
        for (auto c : r) {
            cout << c << " ";
        }
        cout << "]";
        cout << endl;
    }
}

const int mx = 2e5 + 123;
// char adjMat[mx][mx];
ll a[mx], sum[mx];

// vector<long long> v;
// vector<bool> arr;

void solve()
{
    int n, q;
    cin >> n >> q;


    for (int i = 1; i <= n;i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        sum[i] = a[i] + sum[i - 1];
    }

    while (q--) {
        int a, b;
        cin >> a >> b;

        cout << sum[b] - sum[a - 1] << endl;
    }



}



int main()
{
    init_code();

    // int t; cin >> t; while (t--) { solve(); }
    solve();

    return 0;


}