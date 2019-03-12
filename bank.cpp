//
// Created by uyent on 12/7/2018.
//


#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t,n,sum;
    cin >> n >> t;
    vector <int> k(t+1, 0);

    for (int i = 0; i < n; i++) {
        int cash, time;
        cin >> cash >> time;

        for (int j = time ; j >= 0; j--) {
            if (cash > k[j]) {
                swap(cash, k[j]);
            }
        }
    }

    sum = 0;
    for (int i = 0; i < t; i++) {
        sum += k[i];
    }

    cout << sum << endl;
}