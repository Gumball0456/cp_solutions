#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int &el: arr) cin >> el;
    vector<int> ones;
    for(int i = 0; i < n; i++) if(arr[i]) ones.push_back(i);
    ll ans = ones.size() > 0 ? 1 : 0;
    for(int i = 1; i < ones.size(); i++) ans *= ones[i] - ones[i-1];
    cout << ans;
    return 0;
}