#include<stdio.h>
int main() {
    int n = 5;
    int k = n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            printf("%d ", j);
        }
        printf("\n");
        k--;
    }
}

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
