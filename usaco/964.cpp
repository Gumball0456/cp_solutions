#include <bits/stdc++.h>
 
using ll = long long;
using namespace std;
 
int main(){
	freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s; 
    cin >> n >> s;
    map<string, int> fmp;
    for(int i = 1; i <= n; i++){
        bool flag = true;
        for(int j = 0; j <= n - i; j++){
            string str = s.substr(j,i);
            if(fmp[str] > 0)
                flag = false;
            fmp[str]++;
        }
        if(flag){cout << i; break;}
    }
}
