#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <cmath>
#include <utility>
#include <string>

using namespace std;

int main(){

    int N = 0;
    cin >> N;

    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        if(s == "Y"){
            cout << "Four";
            return 0;
        }
    }
    //cout << hina[0];
    cout << "Three";
}