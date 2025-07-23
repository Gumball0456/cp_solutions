#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    string vec[n];
    for(string &s: vec) cin >> s;
    sort(vec, vec + n, [](string &a, string &b)-> bool{
        return a.length() < b.length();
    });
    string ans;
    for(string &s: vec) ans += s;
    cout << ans;
    return 0;
}