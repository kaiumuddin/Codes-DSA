#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int s = n - 1;
    int k = 1;

    for (int i = 1; i <= n * 2 - 1; i++) {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }
        for (int j = 1; j <= k; j++) {
            printf("%d", j);
        }
        printf("\n");

        if (i <= n - 1) {
            k += 2;
            s--;
        }
        else {
            k -= 2;
            s++;
        }
    }
}

//     1
//    123
//   12345
//  1234567
// 123456789
//  1234567
//   12345
//    123
//     1