#include<bits/stdc++.h>
using namespace std;

int main() {
    // vector<int> v; // type 1
    // vector<int> v(5); // type 2
    vector<int> v(5, 10); // type 2

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    cout << endl;
    return 0;
}