#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int tc; cin >> tc;
    while(tc--){
        ll n, k; cin >> n >> k;
        ll a[n], b[n];
        for(ll &el: a) cin >> el;
        for(ll &el: b) cin >> el;
        ll x = -1, mn = 1e10, mx = -1;
        for(int i = 0; i < n; i++){
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
            if(b[i] != -1){
                if(x == -1) x = b[i] + a[i];
                else if(b[i] + a[i] != x) x = -2;
            }
        }
        if(x == -2) cout << 0;
        else if(x > -1) cout << (x - mx >= 0 && x - mn <= k) ;
        else cout << k - mx + mn + 1;
        cout << '\n';
    }
    return 0;
}