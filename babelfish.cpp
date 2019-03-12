//
// Created by uyent on 12/7/2018.
//

#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

int main() {
    map<string, string> words;
    string line, english, foreign;


    while (getline(cin, line) && !line.empty()) {
        stringstream s(line);

        s >> english >> foreign;
        words[foreign] = english;


    }

    while (cin >> foreign) {
        english = words[foreign];
        cout << (english.empty() ? "eh" :english) << endl;
    }
}