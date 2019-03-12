#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int c, n, s;
    cin >> c;

    while(c--) {
        cin >> n;
        s = 0;
        int num[n];

        for (int i = 0; i < n; i++) {
            cin >> num[i];
            s += num[i];
        }

        double average = s*1.0/n;
        int numAbove = 0;
        for (int j = 0; j < n; j++) {
            if (num[j] > average) {
                numAbove++;
            }
        }

        cout<<fixed<<setprecision(3)<<numAbove*1.0/n*100<<"%"<<endl;

    }

    return 0;
}