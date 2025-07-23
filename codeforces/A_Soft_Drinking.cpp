#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, k, l, c, d, p, nl, np; cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min({(k*l)/nl, c*d, p/np}) / n;
    return 0;
}