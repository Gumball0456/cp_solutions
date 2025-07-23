#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int arr[n]; 
        for(int &el: arr) cin >> el;
        int ans = arr[0];
        for(int i = 1; i < n; i++){
            ans = ans + arr[i] - 1;
        }
        cout << ans << '\n';
    }
    return 0;
}