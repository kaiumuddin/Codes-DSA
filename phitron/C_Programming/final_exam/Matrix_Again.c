#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int col = 0; col < m; col++) {
        printf("%d ", mat[n - 1][col]);
    }

    printf("\n");

    for (int row = 0; row < n; row++) {
        printf("%d ", mat[row][m - 1]);
    }

    return 0;
}
