#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n; cin >> n;
    int arr[n];
    for(int &el: arr) cin >> el;
    sort(arr, arr + n);
    int l = 0, ans = 0;
    for(int r = 0; r < n; r++){
        while(arr[r] > 2 * arr[l]) l++;
        ans = max(ans, r - l + 1);
    }
    cout << n - ans;
    return 0;
}