#include<stdio.h>
#include<limits.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int nums[n];

    for (int i = 0; i < n;i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n;) {
        int mini = INT_MAX;
        for (int j = 0; j < k && i < n;) {
            if (nums[i] < mini) mini = nums[i];
            i++;
            j++;
        }
        printf("%d ", mini);
    }
}