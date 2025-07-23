#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int ans[101];

int main(){
    int n, m; cin >> n >> m;
    int curr = n;
    int b;
    for(int i = 0; i < n; i++){
        cin >> b;
        for(;b <= curr; curr--){
            ans[curr] = b;
        }
    }
    for(int i = 1; i <= n; i++){
        cout << ans[i] << ' ';
    }
    return 0;
}