#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(char* n, int r, int c, int s) {
        strcpy(name, n);
        roll = r;
        cls = c;
        section = s;
    }

    void print() {
        cout << name << endl;
        cout << roll << endl;
        cout << cls << endl;
        cout << section << endl;
    }
};

int main() {

    char name[100] = "Rahim Ullah";
    Student* rahim = new Student(name, 100, 100, 'A');

    rahim->print();
    rahim->cls = 23;

    (*rahim).section = 'G';
    (*rahim).print();

    // (*rahim). = rahim->

    rahim->print();

    delete rahim;

    rahim->print(); // wont show

    return 0;
}