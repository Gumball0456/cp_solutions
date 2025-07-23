#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll score = 1;
bool flag = false;
bool seen[50];
vector<int> g[50];


void dfs(int n){
    if(seen[n]) return;
    seen[n] = true;
    if(flag) score *= 2;
    else flag = true;
    for(int curr: g[n]) dfs(curr);
}

int main(){
    int n,m; cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        a--,b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(int i = 0; i < n; i++){
        if(!seen[i]) dfs(i);
        flag = false;
    }
    cout << score;
    return 0;
}