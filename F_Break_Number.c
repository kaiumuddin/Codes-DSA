#include<stdio.h>

long long int getDivisible(long long int x) {
    long long int ans = 0;
    while (x % 2 == 0) {
        ans++;
        x = x / 2;
    }

    return ans;
}

int main() {
    long long int n;
    scanf("%lld", &n);

    long long int arr[n];

    for (long long int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    long long int ans = 0;
    for (long long int i = 0; i < n; i++) {
        long long int r = getDivisible(arr[i]);
        if (r > ans) {
            ans = r;
        }
    }

    printf("%d", ans);
}