#include <bits/stdc++.h>

using namespace std;
    
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    ll nums[n];
    for(ll &num: nums) cin >> num;
    sort(nums, nums + n);
    int ans = 0;
    for(int i = 0; i < n; i++)
        if(nums[i] > nums[0] && nums[i] < nums[n-1]) ans++;
    cout << ans;
}
