#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){ 
    int tc; cin >> tc;
    while(tc--){
        ll n,k; cin >> n >> k;
        ll z = 0, o = 0;
        string s; cin >> s;
        for(char c: s) if(c == '1') o++; else z++;
        for(int i = 0; i < k; i++){
            if(z > o) z -= 2;
            else o -= 2;
        }
        if(z == o) cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
    return 0;
}