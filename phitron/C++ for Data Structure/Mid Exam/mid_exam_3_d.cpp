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

int main() {
    char name[100] = "Kaium Uddin";
    Person* kaium = new Person(name, 5.5, 25);

    char name2[100] = "Najnin Sultana";
    Person* najnin = new Person(name2, 5.5, 27);

    if (kaium->age > najnin->age) {
        cout << kaium->name << endl;
    }
    else if (kaium->age < najnin->age) {
        cout << najnin->name << endl;
    }

    return 0;

}