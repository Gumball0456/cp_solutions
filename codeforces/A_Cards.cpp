#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool used[101];

int main(){
    int n; cin >> n;
    int arr[n];
    map<int,vector<int>> mp;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]].push_back(i);
    }
    int sum = (2 * accumulate(arr, arr + n, 0)) / n;
    for(int i = 0; i < n; i++){
        if(used[i]) continue;
        cout << i + 1 << ' ' << mp[sum - arr[i]].back() + 1<< '\n';
        used[mp[sum-arr[i]].back()] = used[i] = true;
        mp[sum-arr[i]].pop_back();
    }
    return 0;
}