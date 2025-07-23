#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;
const ll MAX_N = 100000000000000;
ll even(string s){
    for(size_t i = s.size(); i > 0; i--) s += s[i - 1];
    return stoull(s);
}

ll odd(string s){
    if(s.size() == 1) return MAX_N;
    for(size_t i = s.size() - 1; i > 0; i--) s += s[i - 1];
    return stoull(s);
}
int main(){
    ll b, n; cin >> b >> n;
    vector<ll> ans;
    for(ll i = 1; i < n && i < 10; i++) ans.push_back(i);
    for(ll c = 1;c * c <= n * 10; c++){
        ll t = odd(to_string(c));
        if(t <= n) ans.push_back(t);
        t = even(to_string(c));
        if(t <= n) ans.push_back(t);
    }
    sort(ans.begin(), ans.end());
    for(ll i = 0; i < ans.size(); i++) cout << ans[i] << '\n';
}