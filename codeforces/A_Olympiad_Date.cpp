#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int tc; cin >> tc;
    map<int,int> d;
    d[0] = 3;
    d[1] = 1;
    d[3] = 1;
    d[2] = 2;
    d[5] = 1;
    while(tc--){
        int n; cin >> n;
        int digs[n];
        for(int &el: digs) cin >> el;
        map<int,int> mp;
        int count = 0;
        int i = 0;
        for(; i < n && count != 5; i++){
            mp[digs[i]]++;
            if(mp[digs[i]] == d[digs[i]]) count++;
        }
        if(count != 5) i = 0;
        cout << i << '\n';
    }
    return 0;
}