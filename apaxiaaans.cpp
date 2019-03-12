//
// Created by uyent on 12/7/2018.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    string s;
    cin >> s;

    char last;

    for (auto i = s.begin(); i != s.end(); i++) {

        if (*i != last) {
            cout << *i;
        }
        last = *i;
    }

    cout << endl;
}