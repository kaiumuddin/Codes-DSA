#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main() {

    Student s;
    s.roll = 29;
    s.cls = 1;
    s.section = 'A';

    char nm[100] = "Rahim";
    strcpy(s.name, nm);

    cout << s.name << endl;
    cout << s.roll << endl;
    cout << s.cls << endl;
    cout << s.section << endl;
    return 0;
}