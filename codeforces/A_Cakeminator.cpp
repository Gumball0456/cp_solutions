#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool r[10], c[10];

int main(){
    int n, m; cin >> n >> m;
    string mat[n];
    for(string &s: mat) cin >> s;
    for(int i = 0; i < n; i++)for(int j = 0; j < m; j++)if(mat[i][j] == 'S')r[i] = true, c[j] = true;
    int ans = 0;
    for(int i = 0; i < n; i++)for(int j = 0; j < m; j++)if(!r[i] || !c[j]) ans++;
    cout << ans;    
    return 0;
}