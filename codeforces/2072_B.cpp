#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int count_(string s){
    int counter = 0;
    for(char c: s)
        if(c == '_')
            counter++;
    return counter;
}

int main(){
    int tc = 1;
    cin >> tc;
    while(tc--){
        ll n; cin >> n;
        string s; cin >> s;
        ll u = count_(s);
        ll h = n - u;
        cout << u * ((h+1) / 2) * (h / 2) << '\n';
    }
}