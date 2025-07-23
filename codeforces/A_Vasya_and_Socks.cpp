#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, m, i = 1; cin >> n >> m;
    int ans = 0;
    while(n--){
        if(i % m == 0) n++;
        ans++;
        i++;
    }
    cout << ans;
    return 0;
}