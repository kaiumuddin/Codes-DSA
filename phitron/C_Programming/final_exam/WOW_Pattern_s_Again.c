#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n = 5;
    scanf("%d", &n);
    int s = n - 1;
    int k = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }
        for (int j = 1; j <= k; j++) {
            if (i % 2 == 0)
                printf("*");
            else if (i % 2 == 1)
                printf("^");
        }
        printf("\n");
        k += 2;
        s--;
    }


    return 0;
}
