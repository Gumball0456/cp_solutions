#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll k,n,w; cin >> k >> n >> w;
    ll ans = max(0LL,((k + (k * w)) * w) / 2 - n);
    cout << ans;
    return 0;
}