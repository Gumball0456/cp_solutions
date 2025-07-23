#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int p, n; cin >> p >> n;
    set<int> st;
    int ans = -1;
    for(int i = 0; i < n; i++){
        int el; cin >> el;
        if(st.count(el % p)){
            ans = i + 1;
            break;
        };
        st.insert(el % p);
    }
    cout << ans;
    return 0;
}