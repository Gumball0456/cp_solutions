#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int maxn = 150000 + 1;

vector<int> g[maxn];
set<int> seen1, seen2;

int n_count(int st){
    if(seen1.count(st)) return 0;
    seen1.insert(st);
    int ans = 1;
    for(int &f: g[st]) ans += n_count(f);
    return ans;
}

bool check(int st, int count){
    if(seen2.count(st)) return true;
    seen2.insert(st);
    if(g[st].size() != count) return false;
    bool ans = true;
    for(int &f: g[st]) ans = ans && check(f, count);
    return ans;
}

int main(){
    int n, m; cin >> n >> m;
    while(m--){
        int a, b; cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    bool flag = true;
    for(int i = 1; i <= n; i++){
        if(seen1.count(i)) continue;
        int c = n_count(i);
        if(!check(i, c - 1)) flag = false;
    }
    if(flag) cout << "YES";
    else cout << "NO";
    return 0;
}