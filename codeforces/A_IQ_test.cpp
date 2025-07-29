#include <bits/stdc++.h>

#define READ_ARR(arr) for(auto &el: arr) cin >> el;

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int arr[n]; READ_ARR(arr);
    int ec = 0, oc = 0, lo = -1, le = -1;
    for(int i = 0; i< n; i++){
        if(arr[i] % 2){
            oc += 1;
            lo = i + 1;
        }else{
            ec += 1;
            le = i + 1;
        }
    }
    if(oc == 1) cout << lo;
    else cout << le;
    return 0;
}