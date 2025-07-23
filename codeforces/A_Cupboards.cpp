#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int v[n][2];
    for(auto &l: v) cin >> l[0] >> l[1];
    int ans = 0;
    for(int i = 0; i < 2; i++){
        int o = 0, c = 0;
        for(int j = 0; j < n; j++){
            if(v[j][i]) o++;
            else c++;
        }
        ans += min(o,c);
    }
    cout << ans;
    return 0;
}