#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int pd = 0;
    int sd = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) pd += matrix[i][j];
            if (i + j == n - 1) sd += matrix[i][j];
        }
    }

    printf("%d", (pd - sd) < 0 ? -1 * (pd - sd) : (pd - sd));
}