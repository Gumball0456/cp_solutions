#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string s;
    cin >> s;
    string ans;
    for(char c: s){
        if(c == '2') ans += '2';
    }
    cout << ans;
}