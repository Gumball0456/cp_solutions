#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, m; cin >> n >> m;
    vector<int> g(n);

    for(int i = 0; i < m; i++){
        int a, b, c; cin >> a >> b >> c; a--, b--, c;
        g[a] += c;
        g[b] -= c;
    }
    int ans = 0;
    for(int i: g){
        if(i > 0) ans += i;
    }
    cout << ans;
    return 0;
}