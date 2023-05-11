#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    gets(s);

    int num_smalls = 0;
    int num_caps = 0;
    int num_spaces = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            num_spaces++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            num_smalls++;
        }
        else {
            num_caps++;
        }
    }

    printf("Capital - %d \n", num_caps);
    printf("Small - %d \n", num_smalls);
    printf("Spaces - %d \n", num_spaces);

    return 0;
}
