#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, k; cin >> n >> k;
    vector<vector<int>> ans(n, vector<int>(n,1));
    for(int i = 0; i < n; i++) ans[i][i] = k - n + 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}