#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int r[1000], l[1000];

int main(){
    int n; cin >> n;
    int v[n];
    for(int &i: v) cin >> i;
    for(int i = 1; i < n; i++){
        if(v[i] >= v[i-1]) l[i] = l[i-1]+1;
        if(v[n-1-i] >= v[n-i]) r[n-1-i] = r[n-i]+1;
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
        ans = max(ans, l[i] + r[i]);
    cout << ans + 1;
    return 0;
}