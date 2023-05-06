#include<stdio.h>
int main() {
    int arr[3] = { 10,20,30 };

    printf("%p \n", &arr[0]);
    printf("%p \n", arr);
    printf("%p \n", &arr);

    printf("\n");

    printf("%d \n", *(arr));
    printf("%d \n", *(arr + 0));
    printf("%d \n", arr[0]);
    printf("%d \n", *(0 + arr));
    printf("%d \n", 0[arr]);

    printf("\n");

    printf("%d \n", *(arr + 1));
    printf("%d \n", arr[1]);

    printf("\n");

    printf("%d \n", *(1 + arr));
    printf("%d \n", 1[arr]);
}