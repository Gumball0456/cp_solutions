#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, k; cin >> n >> k;
    ll ans = -10000000000;
    while(n--){
        ll a,b; cin >> a >> b;
        if(b <= k) ans = max(ans, a);
        else ans = max(ans, a - (b - k));
    }
    cout << ans;
    return 0;
}