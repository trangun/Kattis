#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstLine, secondLine;
    cin >> firstLine >> secondLine;

    if(firstLine.length() < secondLine.length()) {
        cout << "no" << endl;
    }
    else {
        cout << "go" << endl;
    }
}