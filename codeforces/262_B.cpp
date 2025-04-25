#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int &num: arr) cin >> num;
    for(int i = 0; k > 0 && i < n && arr[i] < 0; i++, k--){
        arr[i] *= -1;
    }
    int smallest_idx = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] < arr[smallest_idx])
            smallest_idx = i;
    if(k % 2) arr[smallest_idx] *= -1;
    ll ans = 0;
    for(int num: arr) ans += num;
    cout << ans;
    return 0;
}