#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(x) cout << x << endl
#define pii(x, y) cout << x << " : " << y << endl
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
#define file() freopen("in.txt","r",stdin);//freopen("out.txt","w",stdout);
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

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu() { cerr << endl; }
template < typename T, typename ... hello>void faltu(T arg, const hello &... rest) { cerr << arg << ' ';faltu(rest...); }

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

int recur(int t)
{
    if (t < 0) return INT_MAX;
    if (t == 0) return 0;

    int left = recur(t - 2);
    int right = recur(t - 3);

    int minn = INT_MAX;

    if (left != INT_MAX)
        minn = min(minn, left) + 1;
    if (right != INT_MAX)
        minn = min(minn, right) + 1;

    return minn;
}
void pvi(vector<int>& arr) // print 1d arr
{
    for (auto e : arr) cout << e << " ";
    cout << endl;
}
void pvi(vector<ll>& arr) // print 1d arr
{
    for (auto e : arr) cout << e << "\n";
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
vector<string> split(string s, string delimiter) // split a string
{
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find(delimiter, pos_start)) != string::npos) {
        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back(token);
    }

    res.push_back(s.substr(pos_start));
    return res;
}

const int mx = 1e7;
// vector<ll> dp(mx, -1);
ll n;

bool calc(ll m) {
    return 0;
}

void bs1() {
    int k;
    cin >> k;

    vector<int> nums = { 1,6,9 };

    int l = 0,
        r = nums.size(),
        m = 0,
        ans = -1;

    while (l < r) {
        m = l + (r - l) / 2;

        if (nums[m] == k) {
            ans = m;
            break;
        }
        else if (k > nums[m]) {
            l = m + 1;
        }
        else {
            r = m;
        }
    }
    cout << l << " " << m << " " << r << endl;

    cout << ans << endl;
}
void bs2() {
    int k;
    cin >> k;

    vector<int> nums = { 1,6,9 };

    int l = 0,
        r = nums.size() - 1,
        m = 0,
        ans = -1;

    while (l <= r) {
        m = l + (r - l) / 2;

        if (nums[m] == k) {
            ans = m;
            break;
        }
        else if (k > nums[m]) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    cout << l << " " << m << " " << r << endl;

    cout << ans << endl;
}

bool isprime(int n) {

    if (n == 0 || n == 1) {
        return false;
    }

    // loop to check if n is prime
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}


void fn() {
    ll n; cin >> n;

    vector<ll> a(n, 0);

    ll sum = 0, neg = 0, mn = 1e12;

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0) {
            neg++;
            a[i] = -a[i];
        }
        sum += a[i];
        mn = min(mn, a[i]);
    }
    if (neg & 1) sum -= 2 * mn;
    cout << sum << endl;

}

int main()
{
    init_code();

    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << i << " : ";
        // cout << "Scenario #" << i << ": " << fn() << endl;
        fn();
    }


    // fn();
}
// solved today : 1

/*
A------
    constructive:
        multiple ans allowed : cf er output er moto hte hobena
    greedy:
        choose something carefully,
        max()
        only one answer
    brute force:
*/

/*
my weak--------
    greedy + implementation
    brute force + greedy + number theory
*/

/*
Data Type Precedence(bottom to up), ranges
    double
    float
    long long int   : -10^18 -> 10^18 : (1e18)
    long int        : -10^12 -> 10^12 : (1e12)
    int             : -10^9 -> 10^9   : (1e9)
    char
*/

/*
String*********
    getline(cin, str1);
for big int in string
    int last_digit = s[s.size()-1] - '0';
*/

/*
Array Initialization
    global : 1e7, 2e7, ...
    local : 1e5, 2e5, ...
*/

/*
upper_bound : return the position of first greater value.
*/