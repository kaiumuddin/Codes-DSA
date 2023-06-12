#include<bits/stdc++.h>
using namespace std;

int* create_arr() {
    int a[3] = {10, 20, 30};
    return a;
}

int main() {
    int* a = create_arr();
    for (int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}