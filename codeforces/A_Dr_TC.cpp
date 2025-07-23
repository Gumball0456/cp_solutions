#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        string s; cin >> s;
        int num_ones = 0;
        int ans = 0;
        for(char ch: s) num_ones += ch == '1';
        for(char ch: s){
            ans += num_ones;
            if(ch == '1') ans -= 1;
            else ans += + 1;
        }
        cout << ans << '\n';
    }
    return 0;
}