#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int xpos = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == xpos && j == xpos) {
                printf("X");
                continue;
            }
            else if (i == j) {
                printf("\\");
            }
            else if (i + j == n - 1) {
                printf("/");
            }
            else printf("*");
        }
        printf("\n");
    }
}