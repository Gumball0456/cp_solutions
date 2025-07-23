#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int tc = 1; cin >> tc;
    while(tc--){
        int n, x; cin >> n >> x;
        int sum = 0, el;
        for(int i = 0; i < n; i++){
            cin >> el;
            sum += el;
        }
        if(sum % n == 0 && sum / n == x) cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
    return 0;
}