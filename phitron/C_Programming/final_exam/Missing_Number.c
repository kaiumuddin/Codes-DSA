#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void solve(void) {
    long long int sum, a, b, c;
    scanf("%lld %lld %lld %lld", &sum, &a, &b, &c);

    int given = a + b + c;

    printf("%d\n", sum - given);
}

int main() {

    int t;
    scanf("%d", &t);

    while (t--) {
        solve();
    }
    return 0;
}
