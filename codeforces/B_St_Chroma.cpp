#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n, x; cin >> n >> x;
        vector<int> ans;
        for(int i = 0; i < n; i++)
            ans.push_back(i);
        if(x < n) {
            ans[x] = n - 1;
            ans[n-1] = x;
        }
        for(int el: ans) cout << el << ' ';
        cout << '\n';
    }
    return 0;
}