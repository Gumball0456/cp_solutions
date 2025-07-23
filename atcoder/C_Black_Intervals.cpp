#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool c[600000];

int main(){
    int n, q; cin >> n >> q;
    int queries[q]; for(int &query: queries) cin >> query;
    vector<int> ans;
    int curr = 0;
    for(int query: queries){
        if(c[query-1] == 0 && c[query+1] == 0 && !c[query]) curr++;
        if(c[query-1] == 0 && c[query+1] == 0 && c[query]) curr--;
        if(c[query-1] && c[query+1] && !c[query]) curr--;
        if(c[query-1] && c[query+1] && c[query]) curr++;
        c[query] = !c[query];
        ans.push_back(curr);
    }
    for(int el: ans) cout << el << '\n';
    return 0;
}