#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int arr[n]; for(int &el: arr) cin >> el;
        int ans = 1;
        int curr = arr[0];
        for(int i = 1; i < n; i++){
            if(curr + 1 >= arr[i]) continue;
            ans++;
            curr = arr[i];
        }
        cout << ans << '\n';
    }
    return 0;
}