#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    int ans = 0;
    for(int i = 0, j = 0; i < (int) s.length(); i++){
        if(s.compare(i, 4, "bear") == 0){
            ans += ((int) s.size() - (i + 3)) * (i - j + 1);
            j = i + 1;
        }
    }
    cout << ans;
    return 0;
}