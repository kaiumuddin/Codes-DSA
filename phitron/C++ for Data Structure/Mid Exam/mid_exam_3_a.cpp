#include<bits/stdc++.h>
using namespace std;

class Person {
public:
    char name[100];
    float height;
    int age;

    Person(char* n, float h, int a) {
        strcpy(name, n);
        height = h;
        age = a;
    }
};

Person fun() {
    char name[100] = "Kaium Uddin";
    Person kaium(name, 5.5, 25);

    return kaium;
}

int main() {

    Person kaium = fun();

    cout << kaium.name << endl;
    cout << kaium.height << endl;
    cout << kaium.age << endl;
}