#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <cmath>
#include <utility>

using namespace std;

int main(){

    int N = 0;
    cin >> N;
    string s;
    //cin >> s;
    
    int groupNum = 0;

    if(N == 3){
        groupNum = 1;
    }else if(N > 3){
        groupNum = N / 3 + 1;
        if(N % 3 < 3){
            groupNum--;
        }
    }else{
        groupNum = 0;
    }
    
    cout << groupNum;
}