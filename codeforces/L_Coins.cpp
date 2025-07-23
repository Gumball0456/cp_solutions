#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, k; cin >> n >> k;
    int ans = 0;
    while(k > 0){
        if(n > k) n = k;
        ans += k / n;
        k -= (k/n) * n;
    }
    cout << ans;
    return 0;
}