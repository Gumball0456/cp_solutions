#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int arr[n][2];
    for(int i = 0; i < n; i++) cin >> arr[i][0] >> arr[i][1];
    int ans = 0;
    int sm = 1000;
    for(int i = 0; i < n; i++){
        sm = min(sm, arr[i][1]);
        ans += sm * arr[i][0];
    }
    cout << ans;
    return 0;
}