#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t,k;
    cin >> t;
    int n;
    for(int i = 0; i < t; i++){
        cin >> k;
        n = pow(2,k) - 1;
        cout << n << endl;
    }
    return 0;
}