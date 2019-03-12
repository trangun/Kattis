#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, u;
    cin >> s;
    u.push_back(s[0]);
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == '-') {
            u.push_back(s[i+1]);
        }
    }
    cout << u << endl;
}