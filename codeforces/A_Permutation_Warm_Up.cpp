#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int ans = 1;
        for(int i = 1; i <= n / 2; i++) ans += (n-i+1 - i);
        cout << ans << '\n';
    }
    return 0;
}