#include<stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int found = 0;
    int x;
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == x) {
                found = 1;
            }
        }
    }

    if (found) {
        printf("will not take number");
    }
    else {
        printf("will take number");
    }

}