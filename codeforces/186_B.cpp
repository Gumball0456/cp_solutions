#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, t1, t2, k; cin >> n >> t1 >> t2 >> k;
    k = 100 - k;
    vector<pair<double,int>> table(n);
    for(int i = 1; i <= n; i++){
        double a, b; cin >> a >> b;
        table[i-1].first = max(a * t1 * (k / 100.0) + b * t2, b * t1 * (k / 100.0) + a * t2);
        table[i-1].first *= -1;
        table[i-1].second = i;
    }
    sort(table.begin(), table.end());
    for(auto p: table){
        cout << p.second << fixed << setprecision(2) << ' ' << -1 * p.first << '\n';
    }
    
    return 0;
}