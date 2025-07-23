#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    string arr[n]; for(string &s: arr) cin >> s;
    set<string> c;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            c.insert(arr[i] + arr[j]);
        }
    }
    cout << c.size();
    return 0;
}