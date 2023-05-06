#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<string> split(string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find(delimiter, pos_start)) != string::npos) {
        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back(token);
    }

    res.push_back(s.substr(pos_start));
    return res;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<vector<string>> inp;
        while (n--) {
            vector<string> single;
            for (int i = 0;i < 4; i++) {
                string s;
                cin >> s;
                single.push_back(s);
            }
            single[2] = single[2] + " " + single[3];
            single.pop_back();
            inp.push_back(single);
        }

        sort(inp.begin(), inp.end(), [](const vector<string>& lhs, const vector<string>& rhs) {
            if (lhs[2] == rhs[2]) {
                if (stoi(lhs[1]) == stoi(rhs[1])) {
                    string y1 = lhs[0].substr(6, 4);
                    string y2 = rhs[0].substr(6, 4);

                    if (stoi(y1) == stoi(y2)) {
                        string m1 = lhs[0].substr(3, 2);
                        string m2 = rhs[0].substr(3, 2);

                        if (stoi(m1) == stoi(m2)) {
                            string d1 = lhs[0].substr(0, 2);
                            string d2 = rhs[0].substr(0, 2);

                            return stoi(d1) < stoi(d2);
                        }

                        return stoi(m1) < stoi(m2);
                    }
                    return stoi(y1) < stoi(y2);
                }
                return stoi(lhs[1]) > stoi(rhs[1]);
            }
            return lhs[2] < rhs[2];
            });


        for (auto i : inp) {
            for (auto j : i) {
                cout << j << " ";
            }
            cout << endl;
        }
    }


    return 0;
}
