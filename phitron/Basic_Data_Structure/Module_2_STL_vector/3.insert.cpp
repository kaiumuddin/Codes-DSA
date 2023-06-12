#include<bits/stdc++.h>
using namespace std;

void pv(vector<int>& v) {
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> x = { 10,20,30 };
    vector<int> v = { 1,2,3,4,5,6,7 };

    // v.insert(v.end(), x.begin(), x.end());
    // v.erase(v.begin(), v.end());
    v.erase(v.begin(), v.begin() + 4);
    
    pv(v);
    return 0;
}