#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main(){
    int tc = 1;
    cin >> tc;
    while(tc--){
        int k; cin >> k;
        if((k + 2) % 3) cout << "NO";
        else cout << "YES";
        cout << '\n';
    }   
}