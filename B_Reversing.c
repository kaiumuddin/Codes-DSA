#include<stdio.h>

void reverse(int arr[], int right) {
    int left = 0;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            reverse(arr, i - 1);
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

}