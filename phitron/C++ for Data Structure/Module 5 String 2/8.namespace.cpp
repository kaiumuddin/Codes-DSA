#include<bits/stdc++.h>
using namespace std;

namespace Rakib {
    int age = 24;
    void hello() {
        cout << "Rakib Namespace" << endl;
    }

}


namespace Sakib {
    int age = 35;
    void hello() {
        cout << "Rakib Namespace" << endl;
    }

}
using namespace Rakib;
using namespace Sakib;
int main() {
    cout << age << endl;
    cout << age << endl;
    return 0;
}