#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, x; cin >> n >> x;
    int sum = 0, ans = 0, curr;
    while(n--){
        cin >> curr;
        sum += curr;
    }
    while(sum){
        curr = min(0 - sum, x);
        curr = max(curr, -x);
        sum += curr;
        ans++;
    }
    cout << ans;
    return 0;
}