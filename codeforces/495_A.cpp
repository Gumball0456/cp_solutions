#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    map<char, int> mp;
    mp['0'] = 2;
    mp['1'] = 7;
    mp['2'] = 2;
    mp['3'] = 3;
    mp['4'] = 3;
    mp['5'] = 4;
    mp['6'] = 2;
    mp['7'] = 5;
    mp['8'] = 1;
    mp['9'] = 2;
    string x; cin >> x;
    printf("%d", mp[x[0]] * mp[x[1]]);
    return 0;
}