#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int sp = n - 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j <= sp) {
                printf(" ");
            }
            else {
                printf("%d", i);
            }

        }
        sp--;
        printf("\n");
    }
}

//     1
//    22
//   333
//  4444
// 55555