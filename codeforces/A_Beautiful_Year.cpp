#include <bits/stdc++.h>

using ll = long long;
using namespace std;

bool d[10];

bool check(int y){
    for(bool &b: d) b = false;
    while(y > 0){
        int r = y % 10;
        if(d[r]) return false;
        d[r] = true;
        y /= 10;
    }
    return true;
}

int main(){
    int y; cin >> y;
    while(!check(++y));
    cout << y;
    return 0;
}