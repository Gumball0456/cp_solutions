#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    string arr[n];
    bool f = true;
    for(string &s: arr) cin >> s;
    for(int i = 0; i < n; i++){
        string s = arr[i];
        if((i < n-1 && arr[i][0] == arr[i+1][0])) f = false;
        for(char c: s) if(c != s[0]) f = false;
    }
    if(f) cout << "YES";
    else cout << "NO";
    return 0;
}