#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solve() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i + 1;
        }
    }

    return -1;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d", &t);

    for (int tc = 1; tc <= t; tc++) {
        printf("Case %d: ", tc);

        int ans = solve();

        if (ans == -1) {
            printf("Not Found \n");
        }
        else {
            printf("%d \n", ans);
        }
    }

    return 0;
}
