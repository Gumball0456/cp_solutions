#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll mod = 1e9 + 7;

int main(){
    int n; cin >> n;
    ll a = 1, b = 1;
    for(int i = 0; i < n; i++){
        a *= 27;
        b *= 7;
        a %= mod;
        b %= mod;
    }   

    cout << (a-b + mod) % mod;
    return 0;
}