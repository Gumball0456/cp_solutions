#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int tc; cin >> tc;
    while(tc--){
        ll a, b, c, d; cin >> a >> b >> c >> d;
        if((a < b && a < d) || (c < b && c < d)) cout << "Flower";
        else cout << "Gellyfish";
        cout << '\n';
    }
    return 0;
}