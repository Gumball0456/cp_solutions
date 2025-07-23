#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n,m ;cin >> n >> m;
    int arr[n]; for(int &el: arr) cin >> el;
    int sum = 0;
    for(int el: arr) sum += el;
    if(sum > m) cout << "No";
    else cout << "Yes";
}