#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;

const int MAXN = 3e5 + 2;
ll c1[MAXN], c2[MAXN], c3[MAXN];

int main(){
    int n; cin >> n;
    int len = 1, rem = 0;
    ll remsum = 0, ans;
    ll t, c, x, k;

    while(n--){
        cin >> t;
        if (t == 1){
            cin >> c >> x;
            c1[len] = x;
            c2[len] = c + c2[len - 1];
            c3[len] = x * c + c3[len - 1];
            len++;
        }else{
            cin >> k;
            rem += k;
            size_t idx = upper_bound(c2, c2 + len, rem) - c2;
            ans = c3[idx - 1] + c1[idx] * (rem - c2[idx-1]) - remsum;
            cout << ans << '\n';
            remsum += ans;
        }
    }
    return 0;
}