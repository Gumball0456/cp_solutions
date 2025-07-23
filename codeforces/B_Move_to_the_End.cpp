#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        ll arr[n + 1][2]; for(int i = 0; i < n; i++) cin >> arr[i][0];
        arr[n][0] = 0;
        ll curr = 0;
        for(int i = 0; i <= n; i++){
            arr[i][1] = curr;
            curr = max(curr, arr[i][0]);
        }
        curr = 0;
        for(int i = n; i > 0; i--){
            curr += arr[i][0];
            cout << curr + arr[i][1] << ' ';
        }
        cout << '\n';
    }
    return 0;
}