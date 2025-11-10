#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int ans[(int) 9e5];
set<int> st;

int main(){
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++) st.insert(i);
    for(int i = 0; i < m; i++){
        int l, r, x; cin >> l >> r >> x;
        set<int> v;
        for(auto it = st.lower_bound(l); it != st.end() && *it <= r; it++)
            if(*it != x) v.insert(*it);
        for(auto el: v){
            ans[el] = x;
            st.erase(el);
        }
    }
    for(int i = 1; i <= n; i++) cout << ans[i] << ' ';
    return 0;
}