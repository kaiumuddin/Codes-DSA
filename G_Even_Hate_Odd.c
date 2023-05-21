#include<stdio.h>
#include <stdlib.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        long long arr[n];

        for (long long i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }

        long long count[2] = { 0 };

        for (long long i = 0; i < n; i++) {
            count[arr[i] & 1]++;
        }

        // printf("%lld %lld\n", count[0], count[1]);

        if (count[0] == count[1]) {
            printf("%d \n", 0);
        }
        else if ((count[0] + count[1]) & 1) {
            printf("%d \n", -1);
        }
        else {
            long long int ans = abs(count[0] - count[1]) / 2;
            printf("%lld \n", ans);
        }
    }

}