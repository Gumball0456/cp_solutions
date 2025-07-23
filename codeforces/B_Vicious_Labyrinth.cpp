#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int tc = 1; cin >> tc;
    while(tc--){
        int n, k; cin >> n >> k;

        for(int i = 1; i < n - 1; i++){
            cout << (k % 2 ? n : n - 1) << ' ';
        }
        cout << n << ' ' << n-1 << '\n';
    }
    return 0;
}