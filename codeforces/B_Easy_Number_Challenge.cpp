#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll mod = 1073741824;

const int MAXN = 1000001;
int spf[MAXN];

void sieve(){
    spf[1] = 1;
    for(int curr_prime = 2; curr_prime <= MAXN; curr_prime++){
        if(spf[curr_prime]) continue;
        for(int i = curr_prime; i <= MAXN; i += curr_prime){
            if(spf[i] != 0) continue;
            spf[i] = curr_prime;
        }
    }
}

int d(int n){
    int ans = 1;
    while(n != 1){
        int prime = spf[n]; 
        int count = 1; // already included one
        while(n % prime == 0){
            n /= prime;
            count++;
        }
        ans *= count;
    }
    return ans;
}

int main(){
    int a,b,c; cin >> a >> b >> c;
    sieve();
    ll ans = 0;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            for(int k = 1; k <= c; k++){
                ans += d(i * j * k);
                ans %= mod;
            }
        }
    }
    cout << ans;
    return 0;
}