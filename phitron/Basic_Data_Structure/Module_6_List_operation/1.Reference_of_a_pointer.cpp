#include<bits/stdc++.h>
using namespace std;

void fun(int* ptr) {
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;
    ptr = NULL;
}

void fun2(int*& ptr) {
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;
    // ptr = NULL;
}

int main() {
    int val = 10;
    int* ptr = &val;

    // fun(ptr);
    fun2(ptr);
    printf("--------------------------------\n");

    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;

    return 0;
}