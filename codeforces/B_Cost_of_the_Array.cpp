#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main(){
    int tc = 1;
    cin >> tc;

    while(tc--){
        int n, k, ans; cin >> n >> k;
        ll arr[n];
        for(ll &i: arr) cin >> i;
        if(n == k){
            ans = k/2 + 1;
            for(int i = 1; i < n; i += 2){
                if((i + 1) / 2 != arr[i]) ans = i;
            }
        }else{
            ans = 2;
            for(int i = 1; i < n - k + 2; i++){
                if(arr[i] != 1) ans = 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}