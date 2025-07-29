#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    int b[n];
    for(int i = 0; i < n; i++){
        int el; cin >> el; el--;
        a[el] = i;
    }
    for(int &el: b) {cin >> el; el--;}
    int ans = 0;
    int m = b[n-1];
    for(int i = n-1; i >= 0; i--){
        if(a[b[i]] > a[m]) ans++;
        if(a[b[i]] < a[m]) m = b[i];
    }
    cout << ans;
    return 0;
}