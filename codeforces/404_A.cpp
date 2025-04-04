#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    string mat[n];
    for(string &s: mat) cin >> s;
    bool dc = true;
    bool oc = true;
    for(int i = 0; i < n; i++)
        if(mat[i][i] != mat[0][0] or mat[i][n-1-i] != mat[0][0])
            dc = false;
    char diag_char = mat[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == n - 1 - i or i == j) continue;
            if(mat[i][j] != mat[0][1] or mat[i][j] == diag_char)
                oc = false;
        }
    }
    if(dc and oc) cout << "YES";
    else cout << "NO";
    return 0;
}