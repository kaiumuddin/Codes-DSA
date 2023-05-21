#include<stdio.h>


int main() {
    int n;
    scanf("%d", &n);

    char arr[n + 1];

    scanf("%s", arr);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%s\n", arr);
}