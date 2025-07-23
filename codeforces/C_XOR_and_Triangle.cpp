#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string byte_string(int a){
    string ans;
    while(a > 0){
        ans += to_string(a % 2);
        a /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int bti(string a){
    int ans = 0;
    for(int i = 1, curr = 1; i <= a.length(); i++, curr *= 2){
        ans +=  (a[a.length() - i] == '1' ? curr : 0);
    }
    return ans;
}

bool check(int a, int b, int c){
    return a + b > c && a + c > b && b + c > a;
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        int x; cin >> x;
        string a = byte_string(x);
        string b = string(a.length() - 1,'0');
        int ans = -1;
        for(int i = 1; i <= b.length(); i++){
            b[b.length() - i] = '1';
            int y = bti(b);
            if(check(x, y, x ^ y)) ans = y;
        }
        cout << ans << '\n';
    }
    return 0;
}