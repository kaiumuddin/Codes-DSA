#include<stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int len = strlen(str);

    int i = 0, j = len - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main() {
    char str[10 + 1];
    scanf("%s", &str);
    printf("%d\n", strlen(str));
    if (is_palindrome(str) == 1) {
        printf("Palindrome\n");
    }
    else {
        printf("Not Palindrome\n");
    }

}
