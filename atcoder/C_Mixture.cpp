#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int getint(string s){
    int ans = 0;
    for(size_t i = 0; i < s.size(); i++) if(s[i] == '1') ans += (int)pow(2,s.size() - i - 1);
    return ans;
}

bool check(string &states, string s, int one_count = 0){
    if(one_count == s.size()) return true;
    for(int i = 0; i < (int) s.size(); i++){
        if(s[i] == '1') continue;
        s[i] = '1';
        int idx = getint(s) - 1;
        if((states[idx] != '1') && check(states, s,one_count + 1)) return true;
        s[i] = '0';
    }
    return false;
};
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        bool flag = 0;
        string states; cin >> states;
        string st(n,'0');
        set<string> mem;
        if(check(states, st)) cout << "Yes";
        else cout << "No";
        cout << '\n';        
    }
    return 0;
}