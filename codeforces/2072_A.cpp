#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main(){
    int tc = 1;
    cin >> tc;
    while(tc--){
        int n, k, p; cin >> n >> k >> p;
        if(abs(p * n) < abs(k)){
            cout << -1;
        }else{
            int ans = abs(k) / p;
            if(abs(k) % p) ans++;
            cout <<  ans;
        }
        cout << '\n';
    }
}