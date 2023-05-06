#include<stdio.h>
#include<string.h>
int main() {
    char arr[100] = "programming";
    int cnt[26] = { 0 };

    for (int i = 0; i < strlen(arr); i++) {
        cnt[arr[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        printf("%c 📁 %d \n", 'a' + i, cnt[i]);
    }
}