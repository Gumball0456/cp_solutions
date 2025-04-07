#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    if(n == 1){
        cout << -1;
        return 0;
    }
    ll arr[n];
    for(ll &a: arr) cin >> a;
    sort(arr, arr + n);
    set<int> ans;
    map<int,ll> freq;
    for(int i = 1; i < n; i++){
        freq[arr[i] - arr[i-1]]++;
    }
    
    if(freq.size() == 1){
        ans.insert(arr[0] - arr[1] + arr[0]);
        if(n == 2 && (arr[1] - arr[0]) % 2 == 0){
            ans.insert((ll)arr[0] + (arr[1] - arr[0]) / 2);
        }
        ans.insert(arr[n-1] + (arr[1] - arr[0]));
    }else if(freq.size() == 2){
        auto it = freq.begin();
        it++;
        if(it->second == 1){
            for(int i = 1; i < n; i++){
                if(arr[i] - arr[i-1] == it->first && (arr[i] - arr[i-1]) % 2 == 0 && (arr[i] - arr[i-1]) / 2 == (freq.begin())->first){
                    ans.insert((arr[i] + arr[i-1]) / 2);
                    break;
                }
            }
        }
    }
    cout << ans.size() << '\n';
    for(int i: ans) cout << i << ' ';
    return 0;
}