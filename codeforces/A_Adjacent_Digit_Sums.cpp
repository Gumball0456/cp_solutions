#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int tc = 1;
    cin >> tc;

    while(tc--){
        int x, y; cin >> x >> y;
        string ans = "No";
        if(y - x == 1) ans = "Yes";
        else{
            while(x - 9 >= 0){
                x -= 9;
                if(y - x == 1){
                    ans = "Yes";
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}