#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool seen[50][50];
int father[50][50][2];
string mat[50];

bool check(int i, int j, int n, int m){
    bool ans = false;
    seen[i][j] = true;
    stack<pair<int,int>> s;
    s.push({i,j});
    pair<int,int> u;
    auto process = [&](int a, int b, char c){
        if(mat[a][b] == c){
            if(!seen[a][b]){
                s.push({a,b});
                seen[a][b] = true;
                father[a][b][0] = u.first + 1;
                father[a][b][1] = u.second + 1;
            }
            else ans = true;
        }
    };
    while(!s.empty()){
        u = s.top(); s.pop();
        int l = u.first, k = u.second;
        char c = mat[l][k];
        if(l > 0 && (father[l][k][0] != l || father[l][k][1] != k + 1)) process(l - 1, k, c);
        if(l < n - 1 && (father[l][k][0] != l + 2 || father[l][k][1] != k + 1)) process(l + 1, k, c);
        if(k > 0 && (father[l][k][0] != l + 1 || father[l][k][1] != k)) process(l, k - 1, c);
        if(k < m - 1 && (father[l][k][0] != l + 1 || father[l][k][1] != k + 2)) process(l, k + 1, c);
    }
    return ans;
}

int main(){
    int n, m; cin >> n >> m;
    string ans = "No";
    for(int i = 0; i < n; i++) cin >> mat[i];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(seen[i][j]) continue;
            if(check(i,j,n,m)) ans = "Yes";
        }
    }
    cout << ans;
    return 0;
}