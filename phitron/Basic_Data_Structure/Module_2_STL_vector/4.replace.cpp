#include<bits/stdc++.h>
using namespace std;

void pv(vector<int>& v) {
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = { 1,2,3,4,5,6,7,2,43,2,3,2 };
    replace(v.begin(), v.end(), 2, 1000);

    pv(v);

    auto it = find(v.begin(), v.end(), 34); // grabage or v.end()
    auto it = find(v.begin(), v.end(), 3); // 3
    cout << *it << endl;

    return 0;
}