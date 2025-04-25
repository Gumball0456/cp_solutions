#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int &el: arr) cin >> el;
    map<int, vector<int>> mp;
    string ans;
    int valid_count = 0;
    for(int i = 0; i < n; i++) mp[arr[i]].push_back(i);
    for(auto &p: mp){
        int diff = p.second.size() == 1 ? 0 : p.second[1] - p.second[0];
        bool valid = true;
        for(int i = 2; i < p.second.size(); i++){
            if(p.second[i] - p.second[i-1] != diff){
                valid = false;
                break;
            }
        }
        if(valid){
            valid_count += 1;
            ans += to_string(p.first) + " " + to_string(diff) + '\n'; 
        }
    } 
    cout << valid_count << '\n'  << ans;
    return 0;
}