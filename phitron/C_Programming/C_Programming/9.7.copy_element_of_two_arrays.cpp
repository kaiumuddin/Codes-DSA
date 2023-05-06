#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr1[5] = { 10, 20, 30, 40, 50 };
    int arr2[2] = { 60, 70 };
    int arr3[7] = { 0 };

    int k = 0;

    for (int i = 0;i < 5; i++) {
        arr3[k++] = arr1[i];
    }
    for (int i = 0;i < 2; i++) {
        arr3[k++] = arr2[i];
    }

    for (int i = 0; i < 7; i++) {
        cout << arr3[i] << endl;
    }

    return 0;
}