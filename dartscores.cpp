//
// Created by uyent on 12/7/2018.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t,n,p;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        p = 0;

        for(int j = 0; j < n; j++) {
            int x, y;
            cin >> x >> y;

            double d = sqrt(pow(x, 2) + pow(y, 2));

            p += max(0, 10 - (int)(d - 10e-10)/ 20);
        }

        cout << p << endl;
    }
}
