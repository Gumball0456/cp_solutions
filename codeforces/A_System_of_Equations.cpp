#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MAXN = 10001;
int main(){
    int n,m; cin >> n >> m;
    int ans = 0;
    for(int i = 0; i < MAXN; i++) for(int j = 0; j < MAXN; j++) if(i * i + j == n && i + j * j == m) ans++;
    cout << ans;
    return 0;
}