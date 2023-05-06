#include<stdio.h>
int main() {
    char a[6] = { 'K', 'a', 'i','u','m','\0' };
    printf("%s \n", a);
    printf("%d \n", sizeof(a)); // 6

    char b[6] = "Uddin"; // "Uddin\0"
    printf("%s \n", b);
    printf("%d \n", sizeof(b)); // 6

    char c[] = "Dider";
    printf("%s \n", c);
    printf("%d \n", sizeof(c)); // 7

}