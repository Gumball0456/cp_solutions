#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main(){
    int tc = 1;
    cin >> tc;

    while(tc--){
        int n; cin >> n;
        map<int, int> f_a, f_b;
        for(int i = 0, e; i < n; i++){cin >> e; f_a[e]++;}
        for(int i = 0, e; i < n; i++){cin >> e; f_b[e]++;}
        set<int> st;
        string ans = "NO";
        for(auto &p: f_a){
            for(auto &q: f_b){
                if(p.second < 1) break;
                if(q.second < 1) continue;
                st.insert(p.first + q.first);
                q.second--;
                p.second--;
            }
        }
        if(st.size() > 2) ans = "YES";
        cout << ans << '\n';
    }
    return 0;
}