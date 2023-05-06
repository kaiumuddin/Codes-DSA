#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v; // 2d , dynamic sized array
    v.push_back({ 1, 2 });
    v.push_back({ 3,4, 10 , 23 });
    v.push_back({ 5,6,3 });

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
    }
    cout << endl;

    for (auto row : v) {
        for (auto col : row) {
            cout << col << " ";
        }
    }
}