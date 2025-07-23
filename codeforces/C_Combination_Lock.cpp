#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        string ans;
        if(n % 2 == 0) ans = "-1";
        else{
            for(int i = 1; i <= n; i += 2) ans += to_string(i) + ' ';
            for(int i = 2; i <= n; i += 2) ans += to_string(i) + ' ';
        }
        cout << ans << '\n';
    }
    return 0;
}