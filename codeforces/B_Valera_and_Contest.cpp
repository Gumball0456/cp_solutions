#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n,k,l,r,sa,sk; cin >> n >> k >> l >> r >> sa >> sk;
    vector<int> ans;
    for(int i = 0; i < k; i++)ans.push_back(sk / k + (i < sk % k ? 1 : 0));
    sk = sa - sk;
    k = n - k;
    for(int i = 0; i < k; i++)ans.push_back(sk / k + (i < sk % k ? 1 : 0));
    for(int el: ans) cout << el << ' ';
}