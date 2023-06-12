#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b)
{
    int total_marks_of_a = a.math_marks + a.eng_marks;
    int total_marks_of_b = b.math_marks + b.eng_marks;

    if (total_marks_of_a > total_marks_of_b) {
        return true;
    }
    else if (total_marks_of_a == total_marks_of_b) {
        return a.id < b.id;
    }
    else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    Student students[n];

    for (int i = 0; i < n; i++) {
        cin >> students[i].nm
            >> students[i].cls
            >> students[i].section
            >> students[i].id
            >> students[i].math_marks
            >> students[i].eng_marks;
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << students[i].nm << " "
            << students[i].cls << " "
            << students[i].section << " "
            << students[i].id << " "
            << students[i].math_marks << " "
            << students[i].eng_marks << endl;
    }

    return 0;
}