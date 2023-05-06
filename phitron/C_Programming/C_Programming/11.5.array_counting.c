#include<stdio.h>
int main() {
    int arr[13] = { 5,0,1,4,0,2,3,4,6,5,0,2,3 };
    int cnt[13] = { 0 };

    for (int i = 0; i < 13; i++) {
        cnt[arr[i]]++;
    }

    for (int i = 0; i < 13; i++) {
        printf("%d ", cnt[i]);
    }
}