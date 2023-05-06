#include<stdio.h>
int main() {
    int n = 5;
    int arr[5] = { 5,3,2,4,7 };
    int target = 9;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("%d %d ", arr[i], arr[j]);
                return 0;
            }
        }
    }
}