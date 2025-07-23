#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n,x; cin >> n >> x;
        int arr[n];
        for(int &el: arr) cin >> el;
        sort(arr, arr + n);
        int ans = 0, r = n-1;
        for(int l = n - 1; l > -1; l--){
            if((r - l + 1) * arr[l] < x) continue;
            ans++;
            r = l - 1;
        }
        cout << ans << '\n';
    }
    return 0;
}