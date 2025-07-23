#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int tc = 0;
    cin >> tc;

    while(tc--){
        int n, m; cin >> n >> m;
        ll y0[n], y2[m];
        for(ll &el: y0) cin >> el;
        for(ll &el: y2) cin >> el;
        sort(y0, y0 + n);
        sort(y2, y2 + m);
        int i = 0;
        int j = 0;
        vector<ll> scores;
        ll score = 0;
        int k = 0;
       
        while(n && m){
            if(n > m){
                score += abs(y0[n - i - 1] - y0[i++]);
                n -= 1;
            }else if(m > n){
                score += abs(y2[m - j - 1] - y2[j++]);
                m -= 1;
            }else{
                if(y0[n - i - 1] - y0[i] > y2[m - j - 1] - y2[j]){
                    score += abs(y0[n - i - 1] - y0[i++]);
                    n -= 1;
                }else{
                    score += abs(y2[m - j - 1] - y2[j++]);
                    m -= 1;
                }
            }
            n--, m--;
            scores.push_back(score);
        }
        cout << scores.size() << '\n';
        for(ll s: scores) cout << s << ' ';
        cout << '\n';
    }
    return 0;
}