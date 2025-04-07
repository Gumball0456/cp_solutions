#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int p, q, l, r; cin >> p >> q >> l >> r;
    pair<int,int> sp[p];
    pair<int,int> sq[q];
    for(auto &pr: sp) cin >> pr.first >> pr.second;
    for(auto &pr: sq) cin >> pr.first >> pr.second;
    
    int ans = 0;

    for(int i = l; i <= r; i++){
        int l1 = 0;
        int l2 = 0;
        while(l1 < p && l2 < q){
            int left = max(sp[l1].first, sq[l2].first + i);
            int right = min(sp[l1].second, sq[l2].second + i);
            if(right >= left){
                ans++;
                break;
            }
            if(sp[l1].second < sq[l2].second + i) l1++;
            else l2++;
        }
    }
    cout << ans;
    return 0;
}