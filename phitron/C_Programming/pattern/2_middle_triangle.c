#include<stdio.h>
int main() {
    int n = 5;
    int s = n - 1;
    int k = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }
        for (int j = 1; j <= k; j++) {
            printf("*");
        }
        printf("\n");
        k += 2;
        s--;
    }
}

//     *
//    ***
//   *****
//  *******
// *********