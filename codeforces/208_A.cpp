#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    string ans;
    int i = 0;
    while(i < (int) s.size()){
        if(i < (int) s.size() - 2 && s.substr(i, 3) == "WUB"){
            ans += ' ';
            while(i < (int)s.size() - 2 && s.substr(i, 3) == "WUB") i += 3;
        }else
            ans += s[i++];
    }
    cout << ans;
}