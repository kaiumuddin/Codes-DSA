#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char section;
    int math_marks;
    int eng_marks;
};

int main() {
    int n;
    cin >> n;
    Student students[n];

    for (int i = 0; i < n; i++) {
        cin >> students[i].nm;
        cin >> students[i].cls;
        cin >> students[i].section;
        cin >> students[i].math_marks;
        cin >> students[i].eng_marks;
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << students[i].nm << " "
            << students[i].cls << " "
            << students[i].section << " "
            << students[i].math_marks << " "
            << students[i].eng_marks << endl;
    }

    return 0;
}