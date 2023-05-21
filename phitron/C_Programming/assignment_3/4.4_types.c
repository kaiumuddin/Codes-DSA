#include<stdio.h>

// 1. Has Return + Parameter
int get_max(int a, int b) {
    if (a > b) return a;
    return b;
}

// 2. Has Return + No Parameter
int square() {
    int num = 5;
    return num * num;
}

// 3. No Return + Parameter
void multiplicationTable(int num) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

// 4. No Return + No Parameter
void welcomeMessage() {
    printf("+---------------------------+\n");
    printf("|  Welcome to my program!   |\n");
    printf("+---------------------------+\n");
    printf("Name: Kaium Uddin!\n");
    printf("Age: 25!\n");
    printf("Address: Dohazari, Chandanaish, Chattogram!\n");
}

int main() {
    // 1. Has Return + Parameter
    int ans_1 = get_max(2, 30);
    printf("%d \n\n", ans_1);

    // 2. Has Return + No Parameter
    int ans_2 = square();
    printf("%d \n\n", ans_2);

    // 3. No Return + Parameter
    multiplicationTable(5);
    printf("\n");

    // 4. No Return + No Parameter
    welcomeMessage();
}

// 30 

// 25 

// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
// 5 x 4 = 20
// 5 x 5 = 25
// 5 x 6 = 30
// 5 x 7 = 35
// 5 x 8 = 40
// 5 x 9 = 45
// 5 x 10 = 50

// +---------------------------+
// |  Welcome to my program!   |
// +---------------------------+
// Name: Kaium Uddin!
// Age: 25!
// Address: Dohazari, Chandanaish, Chattogram!