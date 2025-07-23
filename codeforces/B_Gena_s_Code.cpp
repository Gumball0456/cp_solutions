#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int count(string s){
    int ans = 0;
    for(char c: s) {
        if(c != '0') ans++;
        if(c != '1' and c != '0') ans = 2;
    }
    return ans;
}
int main(){
    int n; cin >> n;
    string arr[n]; for(string &el: arr) cin >> el;
    string p = "1"; int suff = 0;
    for(string s: arr){
        if(s == "0"){
            p = "0";
            break;
        }
        int c = count(s);
        if(c > 1) p = s;
        else suff += s.size() - 1;
    }
    if(p == "0") cout << 0;
    else cout << p + string(suff, '0');
    return 0;
}