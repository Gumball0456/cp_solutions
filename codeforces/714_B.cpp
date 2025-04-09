#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main(){
    int n; cin >> n;
    int els[n];
    for(int &el: els) cin >> el;
    sort(els, els + n);
    bool good = true;
    if(n <= 3){

    }
    if(good) cout << "YES";
    else cout << "NO";
    return 0;
}