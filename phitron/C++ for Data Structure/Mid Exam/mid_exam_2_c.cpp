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
    cout << "Size of kaium object: " << sizeof(*kaium) << " bytes" << endl;
}