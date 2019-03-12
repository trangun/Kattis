//
// Created by uyent on 12/7/2018.
//

#include <iostream>

#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string s;
    for(int i = 0; i < n; i++){
        getline(cin,s);
        if(s.find("Simon says") == 0){
            cout <<  s.substr(10) << endl;
        }
    }
}