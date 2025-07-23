#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int &el: arr) cin >> el;
    int counter = 0;
    for(int el: arr) if(5 - el >= k) counter++;
    cout << counter / 3;
    return 0;
}