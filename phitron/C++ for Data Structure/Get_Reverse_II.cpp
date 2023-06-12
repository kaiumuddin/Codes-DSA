#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char section;
    int id;
};

int main() {
    int n;
    cin >> n;
    Student students[n];

    for (int i = 0; i < n; i++) {
        cin >> students[i].nm;
        cin >> students[i].cls;
        cin >> students[i].section;
        cin >> students[i].id;
    }

    int i = 0;
    int j = n - 1;

    while (i < j) {
        int tmp = students[i].id;
        students[i].id = students[j].id;
        students[j].id = tmp;
        i++;
        j--;
    }

    for (int i = 0; i < n; i++) {
        cout << students[i].nm << " "
            << students[i].cls << " "
            << students[i].section << " "
            << students[i].id << endl;
    }

    return 0;
}