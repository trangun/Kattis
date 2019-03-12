//
// Created by uyent on 12/7/2018.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, cd;

    while (cin >> n >> m && (n > 0 || m > 0)) {
        vector<int> jack, jill, common;

        for(int i = 0; i < n; i++) {
            cin >> cd;
            jack.push_back(cd);
        }

        for(int i = 0; i < m; i++) {
            cin >> cd;
            jill.push_back(cd);
        }

        set_intersection(jack.begin(), jack.end(),
                         jill.begin(), jill.end(),
                         back_inserter(common));
        cout<< common.size() <<endl;
    }
}