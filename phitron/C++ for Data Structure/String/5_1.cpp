#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello world";

    cout << s.size() << endl;
    cout << s.max_size() << endl; // 1073741823

    string b = "Hello world, with some love";
    cout << b.capacity() << endl;
    b.clear();
    cout << b << endl;
    cout << b.capacity() << endl;




    string c;
    cin >> c; // hello

    c.resize(8, ' ');
    c += 'c';
    cout << c << endl;



    cout << c[2] << endl;
    cout << c.at(2) << endl;


    return 0;
}