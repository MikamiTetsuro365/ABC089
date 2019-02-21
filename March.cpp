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
    //vector<vector<string> > nameList;
    //nameList.assign(1, vector<string>(N, ""));

    long countTop[5] = {0, 0, 0, 0, 0};

    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        string f;
        f = s.substr(0, 1);
        if(f == "M") countTop[0]++;
        if(f == "A") countTop[1]++;
        if(f == "R") countTop[2]++;
        if(f == "C") countTop[3]++;
        if(f == "H") countTop[4]++;      
    }

    long total = 0;
    //M-A-R M-A-C M-A-H M-R-C M-R-H M-C-H A-R-C A-R-H A-C-H R-C-Hの組み合わせしかない
    //名前は制約にある通り被らないので１０通りの組み合わせしかない
    //頭文字を変えながらどれだけ組み合わせられるか数え上げる
    int loop = 0;
    for(int i = 0; i < 5; i++){
        for(int j = i  + 1; j < 5; j++){
            for(int q = j + 1; q < 5; q++){
                total += countTop[i] * countTop[j] * countTop[q];
                loop++;
            }
        }        
    }
    cout << total;
}