#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n,l,r,x; cin >> n >> l >> r >> x;
    ll v[n];
    for(ll &el: v) cin >> el;
    int ans = 0;
    for(int i = 0; i < (1 << n); i++){
        ll mn = 1e10, mx = 0, count = 0, s = 0;
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                count++;
                s += v[j];
                mn = min(v[j], mn);
                mx = max(v[j], mx);
            }
        }
        if((mx - mn) >= x && s >= l && s <= r && count > 1) ans++;
    }
    cout << ans;
    return 0;
}