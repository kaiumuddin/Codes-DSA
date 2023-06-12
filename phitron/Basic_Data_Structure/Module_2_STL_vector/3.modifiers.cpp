#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> x = { 10,20,30 };
    vector<int> v = { 1,2,3 };

    v = x; // copy ; if size same (1), else O (N)
    x[0] = 1000;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}