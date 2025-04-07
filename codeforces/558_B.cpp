#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    pair<int,int> trees[n];
    int nc = 0, pc = 0;
    for(auto &tree: trees){
        cin >> tree.first >> tree.second;
        if(tree.first > 0) pc++;
        else nc++;
    }
    if(nc < pc) sort(trees, trees+n);
    else sort(trees, trees + n, greater<pair<int,int>>());
    int ans = 0; 
    int count = min(nc, pc) * 2 + (nc != pc);
    for(int i = 0; i < count; i++){
        ans += trees[i].second;
    }
    cout << ans;

    return 0;
}