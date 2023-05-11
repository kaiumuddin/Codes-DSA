#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int mat[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int ans = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                if (mat[i][j] != 1) {
                    ans = 0;
                }
            }
            else if (mat[i][j] != 0) {
                ans = 0;
            }
        }
    }

    if (ans == 1) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }


    return 0;
}
