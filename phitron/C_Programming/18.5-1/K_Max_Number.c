#include<stdio.h>
#include<limits.h>
#include <stdlib.h>

int fun(int arr[], int n) {
    if (n < 0) return INT_MIN;
    int faith = fun(arr, n - 1);
    return (arr[n] > faith) ? arr[n] : faith;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ans = fun(arr, n - 1);
    printf("%d", ans);
}