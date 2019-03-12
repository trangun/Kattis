#include <iostream>

using namespace std;

int main() {
    int a, b=0;
    cin >> a;
    for(int i = 0; i < a; i++) {
        int k;
        cin >> k;
        if(k < 0) {
           b++;
        }
    }
    cout << b << endl;
}