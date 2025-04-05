#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int &el: arr) cin >> el;
    sort(arr, arr + n);
    string ans = "NO";
    for(int i = 0; i < n - 2; i++){
        if(arr[i] + arr[i + 1] > arr[i + 2]) ans = "YES";
    }
    cout << ans;
    return 0;
}