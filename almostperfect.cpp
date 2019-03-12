//
// Created by uyent on 12/7/2018.
//


#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long p, sum;

    while (cin >> p) {
        sum = 0;
        for (int i = 1; i <= sqrt(p); i++) {
            if (p % i ==0) {
                sum += i;
                if (i != sqrt(p)) {
                    sum += p/i;
                }
            }
        }

        sum -= p;

        if (sum == p) {
            cout << p << " perfect" << endl;
        } else if (abs(p-sum) <= 2) {
            cout << p << " almost perfect" << endl;
        } else {
            cout << p << " not perfect" << endl;
        }

    }
}