#include <bits/stdc++.h>

using namespace std;
using ll = long long; 

int main(){
    string ans;
    int idx; cin >> idx;
    for(int i = 0; ans.size() <= 1000; i++) ans.append(to_string(i));
    cout << ans[idx];
    return 0;
}