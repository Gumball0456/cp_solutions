#include <bits/stdc++.h>

using ll = long long;
using namespace std;

bool seen[26];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    char c; cin >> c;
    string mat[n];
    for(auto &l: mat) cin >> l;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] == c){
                if(i > 0) seen[mat[i-1][j] - 'A'] = true;
                if(j > 0) seen[mat[i][j - 1] - 'A'] = true;
                if(i < n - 1) seen[mat[i + 1][j] - 'A'] = true;
                if(j < m - 1) seen[mat[i][j + 1] - 'A'] = true;
            }
        }
    }
    seen[c - 'A'] = false;
    int ans = 0;
    for(bool &el: seen) if(el) ans++;
    cout << ans;
}