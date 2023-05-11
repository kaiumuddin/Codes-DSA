#include<stdio.h>

long long fun(long long arr[], int n) {
    if (n < 0) return 0;

    return arr[n] + fun(arr, n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    long long arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    printf("%lld", fun(arr, n - 1));
}