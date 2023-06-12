#include<bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

int main() {
    Person* rakib = new Person("Rakib Ahsan", 25);
    Person* sakib = new Person("Sakib Rahman", 28);

    // rakib = sakib;

    *rakib = *sakib;
    delete sakib;

    cout << rakib->name << endl;
    cout << rakib->age << endl;
}