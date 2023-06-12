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


    // without -> (arrow sign)
    cout << (*kaium).name << endl;
    cout << (*kaium).height << endl;
    cout << (*kaium).age << endl;

    // with -> (arrow sign)
    cout << kaium->name << endl;
    cout << kaium->height << endl;
    cout << kaium->age << endl;
}