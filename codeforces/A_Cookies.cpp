#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int &i: arr) cin >> i;
    int sum = 0;
    for(int &i: arr) sum += i;
    int ans = 0;
    for(int i: arr)
        if((sum - i) % 2 == 0) ans ++;
    cout << ans;
    return 0;
}