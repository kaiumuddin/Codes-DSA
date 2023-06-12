#include<bits/stdc++.h>
using namespace std;

void print(stringstream& ss) {
    string word;
    if (ss >> word) {
        print(ss);
        cout << word << endl;
    }
}

void print2(stringstream& ss) {
    string word;
    ss >> word;
    
    if (word.size() == 0) {
        return;
    }

    print2(ss);
    cout << word << endl;
}

int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    print2(ss);
    return 0;
}