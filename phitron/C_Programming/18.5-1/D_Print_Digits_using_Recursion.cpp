#include<bits/stdc++.h>
using namespace std;

void fun(int n) {
    if (n == 0) return;
    fun(n / 10);
    printf("%d ", n % 10);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(n == 0) printf("0");
        fun(n);
        printf("\n");
    }
    return 0;
}