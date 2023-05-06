#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    int arr[n + 1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos, val;
    scanf("%d %d", &pos, &val);

    int i;
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    cout << i << endl;

    arr[i] = val;
    for (int i = 0; i < n + 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}