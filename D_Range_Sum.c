#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long int  l, r;
        scanf("%lld %lld", &l, &r);

        long long int sumr = r * (r + 1) / 2;
        long long int suml = (l) * (l + 1) / 2;

        printf("%lld \n", sumr - suml + l);
    }
}