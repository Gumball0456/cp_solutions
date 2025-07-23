#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    int n; cin >> n;
    ll ans = 0, curr = 0;
    for(int i = 1;;i++){
        curr += i;
        n -= curr;
        if(n < 0) break;
        ans++;
    }
    cout << ans;
    return 0;
}