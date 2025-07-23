#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll MAXN = 1e5;
const ll mod = 998244353;
ll t[MAXN], p[MAXN], q[MAXN];
int main(){
    int tc; cin >> tc;
    t[0] = 1; for (int i = 1; i < MAXN; i++) t[i] = (2 * t[i-1]) % mod;
    while(tc--){
        int n; cin >> n;
        for(int i = 0; i < n; i++) cin >> p[i];
        for(int i = 0; i < n; i++) cin >> q[i];

        int i = 0, j = 0;
		int a, b;
        for(int k = 0; k < n; k++){
            if(p[k] > p[i]) i = k;
            if(q[k] > q[j]) j = k;

            if(p[i] == q[j]) cout << (t[q[j]] + t[max(q[k-i],p[k-j])]) % mod;
			else if(p[i] > q[j]) cout << (t[p[i]] + t[q[k - i]]) % mod;
			else cout << (t[q[j]] + t[p[k-j]]) % mod;
			cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}

