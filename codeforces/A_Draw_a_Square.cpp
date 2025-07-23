#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int a; cin >> a;
        string ans = "Yes";
        for(int i = 0; i < 3; i++){
            int el; cin >> el;
            if(el != a) ans = "No";
        }
        cout << ans << '\n';
    }
    return 0;
}