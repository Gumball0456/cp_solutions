#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n = 0; cin >> n;
    vector<string> b(n);
    for(string &s: b) cin >> s;
    bool f= false;
    for(string &s: b){
        if(f = (s[0] == s[1] && s[0] == 'O')){
            s[0] = s[1] = '+';
            f = true;
            break;
        }
        if(f = (s[s.length() - 1] == s[s.length() - 2] && s[s.length() - 1] == 'O')){
            s[s.length() - 1] = s[s.length() - 2] = '+';
            break;
        }
    }
    if(f){
        cout << "YES\n";
        for(string &s: b) cout << s << '\n';
    }else
        cout << "NO";
    return 0;
}