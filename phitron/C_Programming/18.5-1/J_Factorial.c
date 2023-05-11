#include<stdio.h>

long long fun(long long n) {
    if (n == 0) return 1;
    return n * fun(n - 1);
}

int main() {
    long long n;
    scanf("%lld", &n);
    long long ans = fun(n);
    printf("%lld", ans);
}