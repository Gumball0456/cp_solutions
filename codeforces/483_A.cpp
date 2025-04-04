#include <bits/stdc++.h>
	
using namespace std;
using ll = unsigned long long;
	
int main() {
    ll l, r; cin >> l >> r;
    r++;
    ll a = 0, b = 0, c = 0;
    for(ll i = l; i < r;i++){
        for(ll j = i + 1; j < r; j++){
            if(__gcd(i,j) == 1){
                for(ll k = j + 1; k < r; k++){
                    if(__gcd(j,k) == 1 && __gcd(i,k) > 1)
                        a = i, b = j, c = k;
                }
            }
        }
    }
    if(a == 0) cout << -1;
    else cout << a << ' ' << b << ' ' << c;
}