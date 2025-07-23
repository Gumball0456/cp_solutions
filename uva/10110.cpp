#include <iostream>
#include <cmath>
using namespace std;
    
using ll = long long;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    while(1){
        cin >> n;
        if(!n) break;
        ll sq = sqrt(n); 
        if(sq * sq == n) cout << "yes";
        else cout << "no";
        cout << '\n';
    }
}
