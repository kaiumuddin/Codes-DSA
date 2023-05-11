#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int tiger = 0, pathan = 0;
    int sum_tiger = 0, sum_pathan = 0;

    while (n--) {

        scanf("%d %d", &tiger, &pathan);

        if (tiger > pathan) {
            sum_tiger++;
        }
        else if (pathan > tiger) {
            sum_pathan++;
        }

    }

    if (sum_tiger > sum_pathan) {
        printf("Tiger\n");
    }
    else if (sum_pathan > sum_tiger) {
        printf("Pathan\n");
    }
    else {
        printf("Draw\n");
    }

    return 0;
}
