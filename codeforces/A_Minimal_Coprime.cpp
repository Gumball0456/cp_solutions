#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int tc = 0;
    cin >> tc;

    while(tc--){
        ll a, b; cin >> a >> b;
        if(b > a) cout << b- a;
        else cout << (__gcd(a,b) == (ll) 1);
        cout << '\n';
    }
    return 0;
}