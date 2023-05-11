#include<stdio.h>

void fun(int arr[], int n) {
    if (n < 0)return;

    if ((n - 1) % 2 == 0) {
        printf("%d ", arr[n - 1]);
    }
    fun(arr, n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    fun(arr, n);
}