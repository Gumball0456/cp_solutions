#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    string ans = "NO";
    ll l = 1, r = 500, m, val;
    while(l <= r){
        m = l + (r - l) / 2;
        val = (m * (m + 1)) / 2;
        if(val == n)
            ans = "YES";

        if(val > n)
            r = m - 1;
        else
            l = m + 1;
    }
    cout << ans;
    return 0;
}