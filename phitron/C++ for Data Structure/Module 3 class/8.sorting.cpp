#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = { 5,3,2,45,0 };

    sort(arr, arr + 5);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    sort(arr, arr + 5, greater<int>());

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}